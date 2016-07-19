

#import "WMFArticleListTableViewController.h"

@class MWKSearchResult;

@interface WMFMostReadListTableViewController : WMFArticleListTableViewController

- (instancetype)initWithPreviews:(NSArray<MWKSearchResult*>*)previews
                        fromSite:(MWKSite*)site
                         forDate:date
                       dataStore:(MWKDataStore*)dataStore;

@end
