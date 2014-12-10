//
//  APPhoneWithLabel.h
//  APAddressBook
//
//  Created by John Hobbs on 2/7/14.
//  Copyright (c) 2014 alterplay. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Mantle.h>

@interface APPhoneWithLabel : MTLModel

@property (nonatomic) NSString *phone;
@property (nonatomic) NSString *label;

- (id)initWithPhone:(NSString *)phone label:(NSString *)label;

@end
