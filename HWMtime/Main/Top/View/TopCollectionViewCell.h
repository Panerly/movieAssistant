//
//  TopCollectionViewCell.h
//  HWMtime
//
//  Created by mac on 15/11/3.
//  Copyright © 2015年 mac. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Top.h"
@class StarView;

@interface TopCollectionViewCell : UICollectionViewCell
@property (weak, nonatomic) IBOutlet UIImageView *imgView;
@property (weak, nonatomic) IBOutlet UILabel *titleLabel;
@property (weak, nonatomic) IBOutlet UILabel *ratingLable;
@property (nonatomic,strong)Top *top;
@property (weak, nonatomic) IBOutlet StarView *starview;
@end
