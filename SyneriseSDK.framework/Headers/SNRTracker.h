//
//  SNRTracker.h
//  SyneriseSDK
//
//  Created on 30/10/2017.
//  Copyright © 2017 Synerise. All rights reserved.
//

@class SNREvent;

typedef NS_ENUM(NSInteger, SNRTrackerAutoTrackMode) {
    SNRTrackerAutoTrackModeEager,
    SNRTrackerAutoTrackModePlain,
    SNRTrackerAutoTrackModeFine,
    SNRTrackerAutoTrackModeDisabled
};

/**
 SNTracker is responsible for tracking various SNREvents.
 */
@interface SNRTracker : NSObject

NS_ASSUME_NONNULL_BEGIN

- (instancetype)init __unavailable;
+ (instancetype)new __unavailable;

/**
 Enables/disables console logs from SNRTracker.
 
 @note It is not recommended to use debug mode in release version of your application.
 
 @param enabled Enables/disables console logs.
 */
+ (void)setLoggingEnabled:(BOOL)enabled;

/**
 Initializes tracker.

 @note This method needs to be called before any other method of SNRTracker class and only once during application lifecycle.

 @param apiKey Synerise API Key.
 */
+ (void)initialize:(NSString *)apiKey;

/**
 Sets clientId of tracked user.

 @note Synerise Client ID may be obtained after integration with Synerise API.

 @param clientId of tracker user.
 */
+ (void)setClientId:(NSNumber * _Nullable)clientId;

/**
 Sets mode of AutoTrack
 
 @note AutoTrack is disabled by default - mode is set up to SNRTrackerAutoTrackModeDisabled
 
 @param mode of AutoTrack functionality
 */
+ (void)setAutoTrackMode:(SNRTrackerAutoTrackMode)mode;

/**
 Adds new event to queue and sends available events to server if possible.

 @param event @c SNREvent object.
 */
+ (void)send:(SNREvent *)event;

/**
 Forces sending unsent events to Synerise server.

 @param completion A block object to be executed when @c SNRTracler has finished flushing events to Synerise servers, no matter the result.
 */
+ (void)flushEventsWithCompletionHandler:(void (^ _Nullable)(void))completion;

#pragma mark - Deprecated methods
/**
 Forces sending unsent events to Synerise server.
 */
+ (void)flushEvents __deprecated_msg("Use [SNRTracker flushEventsWithCompletionHandler:] method instead.");

NS_ASSUME_NONNULL_END

@end
