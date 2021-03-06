//
//  SDEvent.h
//  SocketRobotDemo
//
//  Created by liyazhou on 2019/1/29.
//  Copyright © 2019 达疆. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface SDEvent : NSObject

@property(nonatomic,copy) NSString *expressions;
@property(nonatomic,copy) NSString *eventId;
@property(nonatomic,copy) NSString *typeId;
@property(nonatomic,copy) NSString *widgetIdentifier;

@end


@interface SDBody : NSObject

@property(nonatomic,copy) NSString *pageIdentifier;
@property(nonatomic,copy) NSArray<SDEvent *> *events;

@end

NS_ASSUME_NONNULL_END
