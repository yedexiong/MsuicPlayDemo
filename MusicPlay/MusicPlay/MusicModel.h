//
//  MusicModel.h
//  MakeMoney
//
//  Created by yedexiong on 16/10/27.
//  Copyright © 2016年 yoke121. All rights reserved.
// 音乐模型

#import <Foundation/Foundation.h>



@interface MusicModel : NSObject



/**
 歌曲编号
 */
@property(nonatomic,copy)NSNumber *Id;

/**
 歌名
 */
@property(nonatomic,strong) NSString *name;
/**
 歌曲作者
 */
@property(nonatomic,copy)NSString *artist;
/**
 
 */
@property(nonatomic,copy)NSString *cover;
/**
 时长
 */
@property(nonatomic,copy)NSString *duration;
/**
 链接
 */
@property(nonatomic,copy)NSString *url;

/**
 是否正在播放
 */
@property(nonatomic,assign) BOOL isPlay;


@property(nonatomic,strong) NSNumber *detailDuration;


-(instancetype)initWithDic:(NSDictionary*)dic;


@end
