

#import "MWKSiteDataObject.h"
#import "MWKList.h"

@interface MWKSavedPageEntry : MWKSiteDataObject
    <MWKListObject>

@property (readonly, strong, nonatomic) MWKTitle* title;
@property (readonly, strong, nonatomic) NSDate* date;

- (instancetype)initWithTitle:(MWKTitle*)title;
- (instancetype)initWithDict:(NSDictionary*)dict;

///
/// @name Legacy Data Migration Flags
///

/// Whether or not image data was migrated from `MWKDataStore` to `WMFImageController`.
@property (nonatomic, readonly) BOOL didMigrateImageData;

@end
