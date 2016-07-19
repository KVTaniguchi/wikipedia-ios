

#import "MWKSiteDataObject.h"
#import "MWKList.h"

@interface MWKRecentSearchEntry : MWKSiteDataObject<MWKListObject>

@property (readonly, copy, nonatomic) NSString* searchTerm;

- (instancetype)initWithSite:(MWKSite*)site searchTerm:(NSString*)searchTerm;
- (instancetype)initWithDict:(NSDictionary*)dict;

@end
