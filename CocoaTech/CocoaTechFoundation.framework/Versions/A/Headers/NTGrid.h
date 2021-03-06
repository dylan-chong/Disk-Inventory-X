//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NTGridLayout, NTSpringLoadedHelper, NTToolTipManager;

@interface NTGrid : NSView
{
    id _delegate;
    id _dragSupport;
    NTGridLayout *_layout;
    BOOL _moveOnDrag;
    BOOL _acceptsDragsOnEmptySpace;
    NTToolTipManager *_tooltipMgr;
    NTSpringLoadedHelper *_springLoadedHelper;
    BOOL _drawDragSelectionInverted;
    struct _NSPoint _sendClickOnMouseUpCoordinate;
    struct _NSPoint _selectItemAtCoordinate;
    struct _NSPoint _dragAndDropItemCoordinate;
    int _dragAndDropInsertIndex;
    struct _NSPoint _currentSpringLoadedItemCoordinate;
    BOOL _currentItemAcceptsSpringLoadActions;
}

- (id)initWithFrame:(struct _NSRect)arg1;
- (void)dealloc;
- (BOOL)isOpaque;
- (void)setDataSet:(id)arg1;
- (id)dataSet;
- (BOOL)isFlipped;
- (struct _NSPoint)selectedCoordinate;
- (id)selectedObject;
- (void)setItemSize:(unsigned int)arg1 layout:(int)arg2;
- (unsigned int)itemSize;
- (int)layoutStyle;
- (void)setDelegate:(id)arg1;
- (void)setDragSupport:(id)arg1;
- (void)setMoveOnDrag:(BOOL)arg1;
- (void)addObjects:(id)arg1 withCoordinate:(struct _NSPoint)arg2;
- (void)addObject:(id)arg1;
- (void)addObject:(id)arg1 withCoordinate:(struct _NSPoint)arg2;
- (void)removeObjectWithCoordinate:(struct _NSPoint)arg1;
- (id)objectWithCoordinate:(struct _NSPoint)arg1;
- (BOOL)moveOnDrag;
- (void)setAcceptsDragsOnEmptySpace:(BOOL)arg1;
- (BOOL)acceptsDragsOnEmptySpace;
- (void)drawRect:(struct _NSRect)arg1;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (BOOL)acceptsFirstResponder;
- (BOOL)shouldDelayWindowOrderingForEvent:(id)arg1;
- (unsigned int)draggingSourceOperationMaskForLocal:(BOOL)arg1;
- (BOOL)ignoreModifierKeysWhileDragging;
- (void)mouseUp:(id)arg1;
- (void)doMouseUp:(id)arg1;
- (void)rightMouseDown:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)pasteboard:(id)arg1 provideDataForType:(id)arg2;
- (unsigned int)draggingEntered:(id)arg1;
- (unsigned int)draggingUpdated:(id)arg1;
- (void)draggingExited:(id)arg1;
- (BOOL)prepareForDragOperation:(id)arg1;
- (BOOL)performDragOperation:(id)arg1;
- (void)concludeDragOperation:(id)arg1;
- (void)draggedImage:(id)arg1 endedAt:(struct _NSPoint)arg2 operation:(unsigned int)arg3;
- (void)refreshForDataChange;
- (struct _NSRect)objectRectWithCoordinate:(struct _NSPoint)arg1;
- (struct _NSRect)objectRectAtIndex:(unsigned int)arg1;

@end

