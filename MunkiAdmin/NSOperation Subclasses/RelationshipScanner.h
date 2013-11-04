//
//  RelationshipScanner.h
//  MunkiAdmin
//
//  Created by Juutilainen Hannes on 1.11.2011.
//

#import <Cocoa/Cocoa.h>

@interface RelationshipScanner : NSOperation {
    NSString *currentJobDescription;
	NSString *fileName;
	id delegate;
    NSInteger operationMode;
    
    NSArray *allApplications;
    NSArray *allPackages;
    NSArray *allCatalogs;
    NSArray *allManifests;
}

+ (id)pkginfoScanner;
+ (id)manifestScanner;
- (id)initWithMode:(NSInteger)mode;

@property NSInteger operationMode;
@property (strong) NSString *currentJobDescription;
@property (strong) NSString *fileName;
@property (strong) id delegate;
@property (strong) NSArray *allApplications;
@property (strong) NSArray *allPackages;
@property (strong) NSArray *allCatalogs;
@property (strong) NSArray *allManifests;

@end