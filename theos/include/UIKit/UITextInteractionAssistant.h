/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import "UIKit-Structs.h"
#import <Foundation/NSObject.h>
#import <Availability2.h>

@class UILongPressGestureRecognizer, UIFieldEditor, UIScrollView, NSMutableArray, UIView, UITextChecker;
@protocol UITextSelectingContainer;

__attribute__((visibility("hidden")))
@interface UITextInteractionAssistant : NSObject {
@private
	UIView<UITextSelectingContainer>* _view;
	NSMutableArray* _recognizers;
	UILongPressGestureRecognizer* loupeGesture;
	int _autoscrollRamp;
	float _autoscrollFactor;
	CGPoint _autoscrollBasePoint;
	CGPoint _autoscrollUntransformedExtentPoint;
	CGPoint _loupeGestureEndPoint;
#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_3_2
	UITextChecker* _textChecker;
#endif
	BOOL _inGesture;
	BOOL _autoscrolled;
	BOOL _isTryingToHighlightLink;
	BOOL _wasShowingCommands;
}
@property(retain, nonatomic) UILongPressGestureRecognizer* loupeGesture;
@property(assign, nonatomic) BOOL inGesture;
@property(readonly, assign, nonatomic) UIView<UITextSelectingContainer>* view;
@property(assign, nonatomic) CGPoint autoscrollUntransformedExtentPoint;
@property(assign, nonatomic) BOOL autoscrolled;
@property(readonly, assign, nonatomic) UIFieldEditor* fieldEditor;
@property(readonly, assign, nonatomic) UIScrollView* scrollView;
-(id)initWithView:(id)view;
// inherited: -(void)dealloc;
-(void)detach;
-(void)attach;
-(BOOL)containerIsTextField;
-(BOOL)containerIsAtom;
-(void)clearGestureRecognizers;
-(BOOL)useGesturesForEditableContent;
-(id)addOneFingerDoubleTapRecognizer:(SEL)recognizer;
-(id)addOneFingerDoubleTapRecognizer;
-(id)addOneFingerTapRecognizer:(SEL)recognizer;
-(id)addOneFingerTapRecognizer;
-(id)addOneFingerTripleTapRecognizer;
-(id)addSelectionTapRecognizer:(SEL)recognizer;
-(id)addSelectionTapRecognizer;
-(id)addTwoFingerSingleTapRecognizer;
-(id)addTapAndAHalfRecognizer;
-(id)addLoupeGestureRecognizer:(BOOL)recognizer;
-(id)addTwoFingerRangedSelectRecognizer;
-(id)addHighlightLinkRecognizer;
-(id)addTapAndHoldOnLinkRecognizer;
-(id)addPhraseBoundaryGestureRecognizer;
-(void)setGestureRecognizers;
-(void)setFirstResponderIfNecessary;
-(void)loupeGesture:(id)gesture;
-(void)confirmMarkedText:(id)text;
-(void)phraseBoundaryGesture:(id)gesture;
-(void)tapAndAHalf:(id)half;
-(void)setSelectionWithPoint:(CGPoint)point;
-(void)doubleTapInUneditable:(id)uneditable;
-(BOOL)shouldHandleGestureAtLocation:(CGPoint)location;
-(void)oneFingerTap:(id)tap;
-(void)oneFingerTapInUneditable:(id)uneditable;
-(void)oneFingerTapSelectsAll:(id)all;
-(void)oneFingerDoubleTap:(id)tap;
-(void)oneFingerTripleTap:(id)tap;
-(void)selectWord;
-(void)selectAll;
-(void)notifyKeyboardSelectionChanged;
-(void)twoFingerSingleTap:(id)tap;
-(void)twoFingerRangedSelectGesture:(id)gesture;
-(CGRect)rectFromContentToContainer:(CGRect)container;
-(CGRect)rectFromContainerToContent:(CGRect)content;
-(CGPoint)pointFromContentToContainer:(CGPoint)container;
-(CGPoint)pointFromContainerToContent:(CGPoint)content;
-(CGPoint)constrainedPoint:(CGPoint)point;
-(void)resignedFirstResponder;
-(void)startAutoscroll:(CGPoint)autoscroll;
-(void)cancelAutoscroll;
-(void)autoscrollWillNotStart;
-(void)updateAutoscroll:(id)autoscroll;
-(BOOL)viewCouldBecomeEditable:(id)editable;
-(void)smallDelayRecognizer:(id)recognizer;
-(void)longDelayRecognizer:(id)recognizer;
-(BOOL)shouldIgnoreLinkGestures;
-(BOOL)isInteractingWithLink;
-(BOOL)tapOnLinkWithGesture:(id)gesture;
-(void)cancelInteractionWithLink;
-(BOOL)longPressGestureCanTransitionToRecognizedState:(id)recognizedState;
-(BOOL)swallowsDoubleTapWithScale:(float)scale atPoint:(CGPoint)point;
-(void)willRotate:(id)rotate;
-(void)didRotate:(id)rotate;
#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_3_2
-(void)selectWordWithoutShowingCommands;
-(void)scheduleReplacementsWithOptions:(unsigned)options;
-(id)wordForTextReplacement;
-(void)showReplacementsWithOptions:(unsigned)options;
#endif
@end
