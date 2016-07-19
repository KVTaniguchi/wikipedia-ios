

#import <Foundation/Foundation.h>

@class MWKSite;

NS_ASSUME_NONNULL_BEGIN

@interface WMFMostReadTitleFetcher : NSObject

- (AnyPromise*)fetchMostReadTitlesForSite:(MWKSite*)site date:(NSDate*)date;

@end

NS_ASSUME_NONNULL_END
