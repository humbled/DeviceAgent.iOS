//
//  CBApplication.h
//  xcuitest-server
//

#import <Foundation/Foundation.h>
#import "XCUIApplication.h"

/**
 DeviceAgent wrapper class for XCUIApplication
 */
@interface Application : NSObject
/**
 Convenience method to launch an app. Sets the launched app as the `currentApplication`
 
 @param bundlePath Optional bundle path for an application to launch. If specified, 
 Xcode might install that app onto the device. Currently it only seems to work with bundles
 generated by Xcode. We have not determined a way to make this work with payloads from 
 signed .ipas.
 
 @param bundleID The only necessary parameter. Please ensure this corresponds to an app that
 is currently running on the device/sim, else undefined behavior will occur. 
 
 @param launchArgs Arguments to pass to the application upon launch. 
 @param environment Key-value dict of environment variables to pass to the app upon launch.
 */
+ (void)launchBundlePath:(NSString *_Nullable)bundlePath
                bundleID:(NSString *_Nonnull)bundleID
              launchArgs:(NSArray *_Nullable)launchArgs
                     env:(NSDictionary *_Nullable)environment;

/**A reference to the currently running application. */
+ (XCUIApplication *_Nonnull)currentApplication;

/**
 Chaches an XCUIElement in a static dictionary such that it is quickly
 referencable later (indexed by an incrementing `test_id` key).
 @param el XCUIElement to cache
 
 ### TODO: deprecate? Remove? Document? Talk to Moody & Karl...
 */
+ (NSNumber *_Nonnull)cacheElement:(XCUIElement  * _Nonnull)el;

/**
 Returnes a cached element
 @param index `test_id` of the element to find
 @exception ElementNotFoundException If the `test_id` isn't present in the cache, 
 you will see an exception raised. `test_id`s are _not_ stable between sessions - 
 make sure you are only querying for `test_id`s that you have discovered during
 the current testing session.
 */
+ (XCUIElement *_Nullable)cachedElementOrThrow:(NSNumber *_Nonnull)index;

/**
 Attempt to kill the current application.
 */
+ (void)killCurrentApplication;

/**
 Returns true
 */
+ (BOOL)hasSession;

@end