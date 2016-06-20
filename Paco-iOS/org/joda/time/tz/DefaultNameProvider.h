//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: joda-time/src/main/java/org/joda/time/tz/DefaultNameProvider.java
//

#include "J2ObjC_header.h"

#pragma push_macro("OrgJodaTimeTzDefaultNameProvider_INCLUDE_ALL")
#ifdef OrgJodaTimeTzDefaultNameProvider_RESTRICT
#define OrgJodaTimeTzDefaultNameProvider_INCLUDE_ALL 0
#else
#define OrgJodaTimeTzDefaultNameProvider_INCLUDE_ALL 1
#endif
#undef OrgJodaTimeTzDefaultNameProvider_RESTRICT

#if !defined (OrgJodaTimeTzDefaultNameProvider_) && (OrgJodaTimeTzDefaultNameProvider_INCLUDE_ALL || defined(OrgJodaTimeTzDefaultNameProvider_INCLUDE))
#define OrgJodaTimeTzDefaultNameProvider_

#define OrgJodaTimeTzNameProvider_RESTRICT 1
#define OrgJodaTimeTzNameProvider_INCLUDE 1
#include "org/joda/time/tz/NameProvider.h"

@class JavaUtilLocale;

@interface OrgJodaTimeTzDefaultNameProvider : NSObject < OrgJodaTimeTzNameProvider >

#pragma mark Public

- (instancetype)init;

- (NSString *)getNameWithJavaUtilLocale:(JavaUtilLocale *)locale
                           withNSString:(NSString *)id_
                           withNSString:(NSString *)nameKey;

- (NSString *)getNameWithJavaUtilLocale:(JavaUtilLocale *)locale
                           withNSString:(NSString *)id_
                           withNSString:(NSString *)nameKey
                            withBoolean:(jboolean)standardTime;

- (NSString *)getShortNameWithJavaUtilLocale:(JavaUtilLocale *)locale
                                withNSString:(NSString *)id_
                                withNSString:(NSString *)nameKey;

- (NSString *)getShortNameWithJavaUtilLocale:(JavaUtilLocale *)locale
                                withNSString:(NSString *)id_
                                withNSString:(NSString *)nameKey
                                 withBoolean:(jboolean)standardTime;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJodaTimeTzDefaultNameProvider)

FOUNDATION_EXPORT void OrgJodaTimeTzDefaultNameProvider_init(OrgJodaTimeTzDefaultNameProvider *self);

FOUNDATION_EXPORT OrgJodaTimeTzDefaultNameProvider *new_OrgJodaTimeTzDefaultNameProvider_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgJodaTimeTzDefaultNameProvider *create_OrgJodaTimeTzDefaultNameProvider_init();

J2OBJC_TYPE_LITERAL_HEADER(OrgJodaTimeTzDefaultNameProvider)

#endif

#pragma pop_macro("OrgJodaTimeTzDefaultNameProvider_INCLUDE_ALL")