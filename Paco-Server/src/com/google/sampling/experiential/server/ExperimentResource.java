/*
 * Copyright 2012 Google Inc. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License"); you may not use this file except
 * in compliance with the License. You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software distributed under the License
 * is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express
 * or implied. See the License for the specific language governing permissions and limitations under
 * the License.
 */

package com.google.sampling.experiential.server;

import com.google.sampling.experiential.shared.Experiment;
import com.google.sampling.experiential.shared.SignalSchedule;

import org.restlet.data.Reference;
import org.restlet.data.Status;
import org.restlet.resource.Get;
import org.restlet.resource.Post;
import org.restlet.resource.ResourceException;

/**
 *
 * @author corycornelius@google.com (Cory Cornelius)
 *
 */
public class ExperimentResource extends PacoExperimentResource {
  @Override
  protected void doInit() throws ResourceException {
    super.doInit();

    if (experiment.hasViewer(user) == false) {
      throw new ResourceException(Status.CLIENT_ERROR_FORBIDDEN);
    }
  }

  @Get("json|gwt")
  public Experiment show() {
    return experiment;
  }

  @Post("gwt|json")
  public void join(SignalSchedule signalSchedule) {
    if (dao.joinExperiment(user, experiment, signalSchedule)) {
      setStatus(Status.SUCCESS_CREATED);
      setLocationRef(new Reference("/subject/experiments/" + experiment.getId()));
    } else {
      setStatus(Status.CLIENT_ERROR_BAD_REQUEST);
    }
  }
}
