

#import <Foundation/Foundation.h>
#import "MWKSite.h"

@interface WMFZeroMessageFetcher : NSObject

- (AnyPromise*)fetchZeroMessageForSite:(MWKSite*)site;

- (void)cancelAllFetches;

@end
