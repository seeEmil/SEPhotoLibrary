//
//  SEPreviewPictureController.h
//  SEPhotoLibrary
//
//  Created by wenchang on 2020/12/9.
//  Copyright © 2020 seeEmil. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
@class SEPhotoModel;
@interface SEPreviewPictureController : UIViewController

- (void)previewPicture:(SEPhotoModel *)imageModel;

//- (void)previewPictureCollection:(NSMutableArray <UIImage *>*)pictureCollection specifySubscript:(NSInteger)index;

- (void)previewPictureCollection:(NSMutableArray <SEPhotoModel *>*)pictureCollection specifySubscript:(NSInteger)index;
@end

NS_ASSUME_NONNULL_END
