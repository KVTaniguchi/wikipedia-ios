

#import "MWKSite+CommonsSite.h"

@implementation MWKSite (CommonsSite)

+ (instancetype)wikimediaCommons {
    return [[self alloc] initWithDomain:@"wikimedia.org" language:@"commons"];
}

@end
