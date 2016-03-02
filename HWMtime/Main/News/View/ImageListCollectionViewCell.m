//
//  ImageListCollectionViewCell.m
//  HWMtime
//
//  Created by mac on 15/11/5.
//  Copyright © 2015年 mac. All rights reserved.
//

#import "ImageListCollectionViewCell.h"
#import "UIImageView+WebCache.h"
@implementation ImageListCollectionViewCell

-(void)layoutSubviews
{
    [super layoutSubviews];

}

-(void)setImagelist:(ImageList *)imagelist
{
    if (_imagelist != imagelist) {
        _imagelist = imagelist;
        [_imgView sd_setImageWithURL:[NSURL URLWithString:_imagelist.image]];
    }
}
@end
