//
//  ACComponentBaseProtocol.h
//  ACNativeKit
//
//  Created by CloudWind on 2017/8/10.
//  Copyright © 2017年 KingNode. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#ifndef ACComponentBaseProtocol_h
#define ACComponentBaseProtocol_h

NS_ASSUME_NONNULL_BEGIN

@protocol ACComponentBaseProtocol <NSObject>

@property (nonatomic,weak,readonly,nullable) UIApplication *applicationContext;

@property (nonatomic,weak,readonly,nullable) UIWindow *mainWindow;

@end

@protocol ACComponentBaseDelegate <NSObject>
@optional
// UIApplicationDelegate方法
+ (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(nullable NSDictionary *)launchOptions;
+ (void)applicationDidBecomeActive:(UIApplication *)application;
+ (void)applicationWillResignActive:(UIApplication *)application;
+ (void)applicationDidEnterBackground:(UIApplication *)application;
+ (void)applicationWillEnterForeground:(UIApplication *)application;

+ (void)applicationDidReceiveMemoryWarning:(UIApplication *)application;

+ (BOOL)application:(UIApplication *)application handleOpenURL:(NSURL *)url;
+ (BOOL)application:(UIApplication *)application openURL:(NSURL *)url sourceApplication:(nullable NSString *)sourceApplication annotation:(id)annotation;

+ (BOOL)application:(UIApplication *)application openURL:(NSURL *)url options:(NSDictionary<NSString*, id> *)options;

+ (void)application:(UIApplication *)application didRegisterForRemoteNotificationsWithDeviceToken:(NSData *)deviceToken;
+ (void)application:(UIApplication *)application didFailToRegisterForRemoteNotificationsWithError:(NSError *)error;
+ (void)application:(UIApplication *)application didReceiveRemoteNotification:(NSDictionary *)userInfo;
+ (void)application:(UIApplication *)application didReceiveLocalNotification:(UILocalNotification *)notification;
+ (void)application:(UIApplication *)application didReceiveRemoteNotification:(NSDictionary *)userInfo fetchCompletionHandler:(void (^)(UIBackgroundFetchResult result))completionHandler;

+ (void)application:(UIApplication *)application performActionForShortcutItem:(UIApplicationShortcutItem *)shortcutItem completionHandler:(void(^)(BOOL succeeded))completionHandler;

+ (void)application:(UIApplication *)application handleEventsForBackgroundURLSession:(NSString *)identifier completionHandler:(void (^)())completionHandler;
+ (BOOL)application:(UIApplication *)application continueUserActivity:(NSUserActivity *)userActivity restorationHandler:(void(^)(NSArray * __nullable restorableObjects))restorationHandler;
+ (void)applicationWillTerminate:(UIApplication *)application;
+ (UIInterfaceOrientationMask)application:(UIApplication *)application supportedInterfaceOrientationsForWindow:(UIWindow *)window;

@end

NS_ASSUME_NONNULL_END
#endif /* ACComponentBaseProtocol_h */
