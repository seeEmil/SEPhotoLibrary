//
//  SEAlbumCollectionViewCell.h
//  SEPhotoLibrary
//
//  Created by wenchang on 2020/11/14.
//  Copyright © 2020 seeEmil. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Photos/Photos.h>

static NSString * _Nullable const albumCollectionViewCell = @"albumCollectionViewCell";

#define SEScreenWidth  [[UIScreen mainScreen] bounds].size.width
#define SEScreenHeight [[UIScreen mainScreen] bounds].size.height

NS_ASSUME_NONNULL_BEGIN

typedef void(^CellSelectedBlock)(PHAsset *asset);

@interface SEAlbumCollectionViewCell : UICollectionViewCell

+ (instancetype)dequeueReusableCellWithCollectionView:(UICollectionView *)collectionView forIndexPath:(NSIndexPath *)indexPath;

// 行数
@property (nonatomic, assign) NSInteger row;
// 相片
@property (nonatomic, strong) PHAsset *asset;
// 选中事件
@property (nonatomic, copy) CellSelectedBlock cellSelectedBlock;
// 是否被选中
@property (nonatomic, assign) BOOL isSelect;

#pragma mark - 加载图片
-(void)loadImage:(NSIndexPath *)indexPath;

- (void)loadCamera;
@end

NS_ASSUME_NONNULL_END
