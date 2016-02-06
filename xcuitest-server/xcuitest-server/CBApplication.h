//
//  CBApplication.h
//  xcuitest-server
//

#import <Foundation/Foundation.h>
#import "XCUIApplication.h"

@interface CBApplication : NSObject
+ (void)launchBundlePath:(NSString *)bundlePath
                bundleID:(NSString *)bundleID
              launchArgs:(NSArray *)launchArgs
                     env:(NSDictionary *)environment;

+ (void)launchBundleID:(NSString *)bundleID
            launchArgs:(NSArray *)launchArgs
                   env:(NSDictionary *)environment;

+ (XCUIApplication *)currentApplication; //TODO: I want to hide this somehow. -CF
+ (void)killCurrentApplication;
+ (BOOL)hasSession;

@end