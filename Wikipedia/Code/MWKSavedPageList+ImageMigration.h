

#import "MWKSavedPageList.h"
@class MWKTitle;

@interface MWKSavedPageList (ImageMigration)

- (void)markImageDataAsMigratedForEntryWithTitle:(MWKTitle*)title;

@end
