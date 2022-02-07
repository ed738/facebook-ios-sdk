/*
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 * All rights reserved.
 *
 * This source code is licensed under the license found in the
 * LICENSE file in the root directory of this source tree.
 */

#import <Foundation/Foundation.h>

#import <FBSDKShareKit/FBSDKSharingContent.h>

NS_ASSUME_NONNULL_BEGIN

/**
 A protocol for media content (photo or video) to be shared.
 */
NS_SWIFT_NAME(ShareMedia)
@protocol FBSDKShareMedia

@end

/**
 A model for media content (photo or video) to be shared.
 */
NS_SWIFT_NAME(ShareMediaContent)
@interface FBSDKShareMediaContent : NSObject <FBSDKSharingContent>

/**
 Media to be shared.
 @return Array of the media (FBSDKSharePhoto or FBSDKShareVideo)
 */
@property (nonatomic, copy) NSArray<id<FBSDKShareMedia>> *media;

@end

NS_ASSUME_NONNULL_END
