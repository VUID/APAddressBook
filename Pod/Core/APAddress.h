//
//  APAddress.h
//  AddressBook
//
//  Created by Alexey Belkevich on 4/19/14.
//  Copyright (c) 2014 alterplay. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Mantle.h>

@interface APAddress : MTLModel

@property (nonatomic) NSString *street;
@property (nonatomic) NSString *city;
@property (nonatomic) NSString *state;
@property (nonatomic) NSString *zip;
@property (nonatomic) NSString *country;
@property (nonatomic) NSString *countryCode;

- (id)initWithAddressDictionary:(NSDictionary *)dictionary;

@end
