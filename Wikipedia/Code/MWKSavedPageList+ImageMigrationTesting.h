

#import "MWKSavedPageList.h"

@interface MWKSavedPageList (ImageMigrationInternal)

- (void)markImageDataAsMigrated:(BOOL)didMigrate forEntryWithTitle:(MWKTitle*)title;

@end
