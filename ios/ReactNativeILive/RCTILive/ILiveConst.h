//
//  MyILiveRtcEngineKit.h
//
//  Created by ruby on 2017/8/31.
//  Copyright © 2017年 Learnta Inc. All rights reserved.
//

//#import <AgoraRtcEngineKit/AgoraRtcEngineKit.h>
#import <UIKit/UIKit.h>

@interface ILiveConst : NSObject

@property (nonatomic, copy) NSString *sdkAppid;
@property (nonatomic, copy) NSString *sdkAccountType;
@property (nonatomic, copy) NSString *hostId;
@property (nonatomic, assign) int roomId;
@property (nonatomic, assign) int userRole;

+ (instancetype)share;

@end
