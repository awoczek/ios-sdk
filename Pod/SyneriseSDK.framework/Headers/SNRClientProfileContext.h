//
//  SNRClientProfileContext.h
//  SyneriseSDK
//
//  Copyright © 2018 Synerise. All rights reserved.
//

#import "SNRBaseContext.h"
#import "SNRClientAgreementsContext.h"
#import "SNRClientSex.h"

@interface SNRClientProfileContext : SNRBaseContext

- (nonnull instancetype)init __unavailable;
+ (nonnull instancetype)new __unavailable;

@property (nonatomic, nullable, copy) NSNumber *clientId;
@property (nonatomic, nullable, copy) NSDate *lastActivityDate;
@property (nonatomic, nullable, copy) NSString *email;
@property (nonatomic, nullable, copy) NSString *phone;
@property (nonatomic, nullable, copy) NSString *firstName;
@property (nonatomic, nullable, copy) NSString *lastName;
@property (nonatomic, nullable, copy) NSString *displayName;
@property (nonatomic, nullable, copy) NSUUID *uuid;
@property (nonatomic, nullable, copy) NSURL *avatarUrl;
@property (nonatomic, nullable, copy) NSString *birthDate;
@property (nonatomic, nullable, copy) NSString *company;
@property (nonatomic, nullable, copy) NSString *city;
@property (nonatomic, nullable, copy) NSString *address;
@property (nonatomic, nullable, copy) NSString *zipCode;
@property (nonatomic, nullable, copy) NSString *province;
@property (nonatomic, nullable, copy) NSString *countryCode;

@end
