

#import "MWKDataObject.h"

@class MWKTitle;
@class MWKSite;
@class MWKUser;

@interface MWKSiteDataObject : MWKDataObject

@property (readonly, strong, nonatomic) MWKSite* site;

- (instancetype)initWithSite:(MWKSite*)site;

- (MWKTitle*)optionalTitle:(NSString*)key dict:(NSDictionary*)dict;
- (MWKTitle*)requiredTitle:(NSString*)key dict:(NSDictionary*)dict;
- (MWKTitle*)requiredTitle:(NSString*)key dict:(NSDictionary*)dict allowEmpty:(BOOL)allowEmpty;

- (MWKUser*)optionalUser:(NSString*)key dict:(NSDictionary*)dict;
- (MWKUser*)requiredUser:(NSString*)key dict:(NSDictionary*)dict;


@end
