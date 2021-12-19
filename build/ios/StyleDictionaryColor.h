
//
// StyleDictionaryColor.h
//

// Do not edit directly
// Generated on Sun, 19 Dec 2021 03:54:14 GMT


#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, StyleDictionaryColorName) {
ColorNotExported,
ColorColorsMultipleFills0,
ColorColorsMultipleFills1,
ColorColorsSingleBlue,
ColorColorsRefBlue,
ColorColorsSpecialCharacters,
ColorColorsSpecialCharactersNderung,
ColorLightBackground,
ColorDarkBackground
};

@interface StyleDictionaryColor : NSObject
+ (NSArray *)values;
+ (UIColor *)color:(StyleDictionaryColorName)color;
@end
