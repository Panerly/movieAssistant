//
//  ImageCollectionView.h
//  HWMtime
//
//  Created by mac on 15/11/9.
//  Copyright © 2015年 mac. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ImageCollectionView : UICollectionView<UICollectionViewDataSource,UICollectionViewDelegateFlowLayout>
@property (nonatomic,assign) CGFloat pageWidth;
@property (nonatomic,copy) NSArray *dataArray;
@property (nonatomic,assign) int current;


@end
