//
//  PosterView.h
//  HWMtime
//
//  Created by mac on 15/11/7.
//  Copyright © 2015年 mac. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Movie.h"
@class PosterCollectionView;
@class IndexCollectionView;
@interface PosterView : UIView
@property (nonatomic,strong) UIControl *mask;
@property (nonatomic,strong) NSArray *dataArray;
@property (nonatomic,strong) PosterCollectionView *collectionView;
@property (nonatomic,strong) IndexCollectionView *indexCollection;
@property (nonatomic,strong) UILabel *footerLable;
@end
