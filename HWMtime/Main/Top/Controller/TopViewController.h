//
//  TopViewController.h
//  HWMtime
//
//  Created by mac on 15/10/31.
//  Copyright © 2015年 mac. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "BasicViewController.h"
#import "Top.h"
@interface TopViewController : BasicViewController<UICollectionViewDelegateFlowLayout,UICollectionViewDataSource>
@property (nonatomic,strong) UICollectionView *col;
@property (nonatomic,strong) NSMutableArray *dataArray;
@end
