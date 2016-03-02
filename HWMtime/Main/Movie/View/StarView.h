//
//  StarView.h
//  HWMtime
//
//  Created by mac on 15/11/2.
//  Copyright © 2015年 mac. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Movie.h"

@interface StarView : UIView

@property (nonatomic,strong) UIView *yellow;
@property (nonatomic,strong) UIView *gray;
//@property (nonatomic,strong) Movie *movie;
@property (nonatomic,assign) float rating;
@end
