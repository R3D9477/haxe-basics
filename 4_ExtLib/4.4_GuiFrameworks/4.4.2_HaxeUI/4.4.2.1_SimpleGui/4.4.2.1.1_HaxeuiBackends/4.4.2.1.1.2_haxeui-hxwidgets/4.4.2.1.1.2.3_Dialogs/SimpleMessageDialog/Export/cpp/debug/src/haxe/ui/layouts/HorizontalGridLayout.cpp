// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_core_Component
#include <haxe/ui/core/Component.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IClonable
#include <haxe/ui/core/IClonable.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IComponentBase
#include <haxe/ui/core/IComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_HorizontalGridLayout
#include <haxe/ui/layouts/HorizontalGridLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_ILayout
#include <haxe/ui/layouts/ILayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_Layout
#include <haxe/ui/layouts/Layout.h>
#endif
#ifndef INCLUDED_haxe_ui_util_Size
#include <haxe/ui/util/Size.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_900920518040509e_5_new,"haxe.ui.layouts.HorizontalGridLayout","new",0x237f02bd,"haxe.ui.layouts.HorizontalGridLayout.new","haxe/ui/layouts/HorizontalGridLayout.hx",5,0x444f40d2)
HX_LOCAL_STACK_FRAME(_hx_pos_900920518040509e_9_get_rows,"haxe.ui.layouts.HorizontalGridLayout","get_rows",0x5399cd25,"haxe.ui.layouts.HorizontalGridLayout.get_rows","haxe/ui/layouts/HorizontalGridLayout.hx",9,0x444f40d2)
HX_LOCAL_STACK_FRAME(_hx_pos_900920518040509e_11_set_rows,"haxe.ui.layouts.HorizontalGridLayout","set_rows",0x01f72699,"haxe.ui.layouts.HorizontalGridLayout.set_rows","haxe/ui/layouts/HorizontalGridLayout.hx",11,0x444f40d2)
HX_LOCAL_STACK_FRAME(_hx_pos_900920518040509e_27_get_usableSize,"haxe.ui.layouts.HorizontalGridLayout","get_usableSize",0xab9e6ce5,"haxe.ui.layouts.HorizontalGridLayout.get_usableSize","haxe/ui/layouts/HorizontalGridLayout.hx",27,0x444f40d2)
HX_LOCAL_STACK_FRAME(_hx_pos_900920518040509e_56_resizeChildren,"haxe.ui.layouts.HorizontalGridLayout","resizeChildren",0x2dd92416,"haxe.ui.layouts.HorizontalGridLayout.resizeChildren","haxe/ui/layouts/HorizontalGridLayout.hx",56,0x444f40d2)
HX_LOCAL_STACK_FRAME(_hx_pos_900920518040509e_106_repositionChildren,"haxe.ui.layouts.HorizontalGridLayout","repositionChildren",0x8682fefe,"haxe.ui.layouts.HorizontalGridLayout.repositionChildren","haxe/ui/layouts/HorizontalGridLayout.hx",106,0x444f40d2)
HX_LOCAL_STACK_FRAME(_hx_pos_900920518040509e_157_calcColumnWidths,"haxe.ui.layouts.HorizontalGridLayout","calcColumnWidths",0x7d4a5edb,"haxe.ui.layouts.HorizontalGridLayout.calcColumnWidths","haxe/ui/layouts/HorizontalGridLayout.hx",157,0x444f40d2)
HX_LOCAL_STACK_FRAME(_hx_pos_900920518040509e_227_calcRowHeights,"haxe.ui.layouts.HorizontalGridLayout","calcRowHeights",0x28eb696a,"haxe.ui.layouts.HorizontalGridLayout.calcRowHeights","haxe/ui/layouts/HorizontalGridLayout.hx",227,0x444f40d2)
HX_LOCAL_STACK_FRAME(_hx_pos_900920518040509e_282_calcExplicitWidths,"haxe.ui.layouts.HorizontalGridLayout","calcExplicitWidths",0xd6cdfb79,"haxe.ui.layouts.HorizontalGridLayout.calcExplicitWidths","haxe/ui/layouts/HorizontalGridLayout.hx",282,0x444f40d2)
HX_LOCAL_STACK_FRAME(_hx_pos_900920518040509e_320_calcExplicitHeights,"haxe.ui.layouts.HorizontalGridLayout","calcExplicitHeights",0xeca7c960,"haxe.ui.layouts.HorizontalGridLayout.calcExplicitHeights","haxe/ui/layouts/HorizontalGridLayout.hx",320,0x444f40d2)
namespace haxe{
namespace ui{
namespace layouts{

void HorizontalGridLayout_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_900920518040509e_5_new)
HXLINE(   6)		this->_rows = (int)1;
HXLINE(  24)		super::__construct();
            	}

Dynamic HorizontalGridLayout_obj::__CreateEmpty() { return new HorizontalGridLayout_obj; }

void *HorizontalGridLayout_obj::_hx_vtable = 0;

Dynamic HorizontalGridLayout_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< HorizontalGridLayout_obj > _hx_result = new HorizontalGridLayout_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool HorizontalGridLayout_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1e0aba9f) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x1e0aba9f;
	} else {
		return inClassId==(int)0x548a03f5;
	}
}

int HorizontalGridLayout_obj::get_rows(){
            	HX_STACKFRAME(&_hx_pos_900920518040509e_9_get_rows)
HXDLIN(   9)		return this->_rows;
            	}


HX_DEFINE_DYNAMIC_FUNC0(HorizontalGridLayout_obj,get_rows,return )

int HorizontalGridLayout_obj::set_rows(int value){
            	HX_STACKFRAME(&_hx_pos_900920518040509e_11_set_rows)
HXLINE(  12)		if ((this->_rows == value)) {
HXLINE(  13)			return value;
            		}
HXLINE(  16)		this->_rows = value;
HXLINE(  17)		if (hx::IsNotNull( this->_component )) {
HXLINE(  18)			 ::haxe::ui::core::Component _this = this->_component;
HXDLIN(  18)			bool _hx_tmp;
HXDLIN(  18)			if (hx::IsNotNull( _this->_layout )) {
HXLINE(  18)				_hx_tmp = (_this->_layoutLocked == true);
            			}
            			else {
HXLINE(  18)				_hx_tmp = true;
            			}
HXDLIN(  18)			if (!(_hx_tmp)) {
HXLINE(  18)				_this->invalidate(HX_("layout",aa,ae,b8,58));
            			}
            		}
HXLINE(  20)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(HorizontalGridLayout_obj,set_rows,return )

 ::haxe::ui::util::Size HorizontalGridLayout_obj::get_usableSize(){
            	HX_STACKFRAME(&_hx_pos_900920518040509e_27_get_usableSize)
HXLINE(  28)		 ::haxe::ui::util::Size size = this->super::get_usableSize();
HXLINE(  29)		::Array< Float > columnWidths = this->calcColumnWidths(size,false);
HXLINE(  30)		::Array< Float > rowHeights = this->calcRowHeights(size,false);
HXLINE(  32)		{
HXLINE(  32)			int _g = (int)0;
HXDLIN(  32)			while((_g < columnWidths->length)){
HXLINE(  32)				Float columnWidth = columnWidths->__get(_g);
HXDLIN(  32)				_g = (_g + (int)1);
HXLINE(  33)				 ::haxe::ui::util::Size size1 = size;
HXDLIN(  33)				size1->width = (size1->width - columnWidth);
            			}
            		}
HXLINE(  36)		{
HXLINE(  36)			int _g1 = (int)0;
HXDLIN(  36)			while((_g1 < rowHeights->length)){
HXLINE(  36)				Float rowHeight = rowHeights->__get(_g1);
HXDLIN(  36)				_g1 = (_g1 + (int)1);
HXLINE(  37)				 ::haxe::ui::util::Size size2 = size;
HXDLIN(  37)				size2->height = (size2->height - rowHeight);
            			}
            		}
HXLINE(  40)		if ((this->get_component()->get_childComponents()->length > (int)1)) {
HXLINE(  41)			int columns = ::Math_obj::ceil(((Float)this->get_component()->get_childComponents()->length / (Float)this->_rows));
HXLINE(  42)			 ::haxe::ui::util::Size size3 = size;
HXDLIN(  42)			Float size4 = size3->width;
HXDLIN(  42)			Float _hx_tmp = this->get_horizontalSpacing();
HXDLIN(  42)			size3->width = (size4 - (_hx_tmp * (columns - (int)1)));
HXLINE(  43)			 ::haxe::ui::util::Size size5 = size;
HXDLIN(  43)			Float size6 = size5->height;
HXDLIN(  43)			Float _hx_tmp1 = this->get_verticalSpacing();
HXDLIN(  43)			size5->height = (size6 - (_hx_tmp1 * (this->get_rows() - (int)1)));
            		}
HXLINE(  46)		if ((size->width < (int)0)) {
HXLINE(  47)			size->width = (int)0;
            		}
HXLINE(  50)		if ((size->height < (int)0)) {
HXLINE(  51)			size->height = (int)0;
            		}
HXLINE(  53)		return size;
            	}


void HorizontalGridLayout_obj::resizeChildren(){
            	HX_STACKFRAME(&_hx_pos_900920518040509e_56_resizeChildren)
HXLINE(  57)		 ::haxe::ui::util::Size size = this->get_usableSize();
HXLINE(  58)		::Array< Float > columnWidths = this->calcColumnWidths(size,true);
HXLINE(  59)		::Array< Float > rowHeights = this->calcRowHeights(size,true);
HXLINE(  60)		::Array< bool > explicitWidths = this->calcExplicitWidths();
HXLINE(  61)		::Array< bool > explicitHeights = this->calcExplicitHeights();
HXLINE(  62)		Float totalWidth = (int)0;
HXLINE(  63)		Float totalHeight = (int)0;
HXLINE(  65)		int rowIndex = (int)0;
HXLINE(  66)		int columnIndex = (int)0;
HXLINE(  67)		{
HXLINE(  67)			int _g = (int)0;
HXDLIN(  67)			::Array< ::Dynamic> _g1 = this->get_component()->get_childComponents();
HXDLIN(  67)			while((_g < _g1->length)){
HXLINE(  67)				 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN(  67)				_g = (_g + (int)1);
HXLINE(  69)				if ((child->get_includeInLayout() == false)) {
HXLINE(  70)					continue;
            				}
HXLINE(  73)				 ::Dynamic cx = null();
HXLINE(  74)				 ::Dynamic cy = null();
HXLINE(  76)				if (hx::IsNotNull( child->get_percentWidth() )) {
HXLINE(  77)					Float ucx = columnWidths->__get(columnIndex);
HXLINE(  78)					if ((explicitWidths->__get(columnIndex) == false)) {
HXLINE(  79)						cx = ucx;
            					}
            					else {
HXLINE(  82)						cx = ((Float)(ucx * child->get_percentWidth()) / (Float)(int)100);
            					}
            				}
HXLINE(  86)				if (hx::IsNotNull( child->get_percentHeight() )) {
HXLINE(  87)					Float ucy = rowHeights->__get(rowIndex);
HXLINE(  88)					if ((explicitHeights->__get(rowIndex) == false)) {
HXLINE(  89)						cy = ucy;
            					}
            					else {
HXLINE(  92)						cy = ((Float)(ucy * child->get_percentHeight()) / (Float)(int)100);
            					}
            				}
HXLINE(  96)				child->resizeComponent(cx,cy);
HXLINE(  98)				rowIndex = (rowIndex + (int)1);
HXLINE(  99)				if ((rowIndex >= this->_rows)) {
HXLINE( 100)					rowIndex = (int)0;
HXLINE( 101)					columnIndex = (columnIndex + (int)1);
            				}
            			}
            		}
            	}


void HorizontalGridLayout_obj::repositionChildren(){
            	HX_STACKFRAME(&_hx_pos_900920518040509e_106_repositionChildren)
HXLINE( 107)		 ::haxe::ui::util::Size size = this->get_usableSize();
HXLINE( 108)		::Array< Float > columnWidths = this->calcColumnWidths(size,true);
HXLINE( 109)		::Array< Float > rowHeights = this->calcRowHeights(size,true);
HXLINE( 110)		int rowIndex = (int)0;
HXLINE( 111)		int columnIndex = (int)0;
HXLINE( 113)		Float xpos = this->get_paddingLeft();
HXLINE( 114)		Float ypos = this->get_paddingTop();
HXLINE( 115)		{
HXLINE( 115)			int _g = (int)0;
HXDLIN( 115)			::Array< ::Dynamic> _g1 = this->get_component()->get_childComponents();
HXDLIN( 115)			while((_g < _g1->length)){
HXLINE( 115)				 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 115)				_g = (_g + (int)1);
HXLINE( 117)				if ((child->get_includeInLayout() == false)) {
HXLINE( 118)					continue;
            				}
HXLINE( 121)				::String halign = this->horizontalAlign(child);
HXLINE( 122)				::String valign = this->verticalAlign(child);
HXLINE( 123)				Float xposChild = (int)0;
HXLINE( 124)				Float yposChild = (int)0;
HXLINE( 126)				::String _hx_switch_0 = halign;
            				if (  (_hx_switch_0==HX_("center",d5,25,db,05)) ){
HXLINE( 128)					Float columnWidths1 = columnWidths->__get(columnIndex);
HXDLIN( 128)					Float xposChild1 = (xpos + ((columnWidths1 - child->get_componentWidth()) * ((Float)0.5)));
HXDLIN( 128)					Float xposChild2 = (xposChild1 + this->marginLeft(child));
HXDLIN( 128)					xposChild = (xposChild2 - this->marginRight(child));
HXDLIN( 128)					goto _hx_goto_9;
            				}
            				if (  (_hx_switch_0==HX_("right",dc,0b,64,e9)) ){
HXLINE( 130)					Float columnWidths2 = columnWidths->__get(columnIndex);
HXDLIN( 130)					Float xposChild3 = (xpos + (columnWidths2 - child->get_componentWidth()));
HXDLIN( 130)					Float xposChild4 = (xposChild3 + this->marginLeft(child));
HXDLIN( 130)					xposChild = (xposChild4 - this->marginRight(child));
HXDLIN( 130)					goto _hx_goto_9;
            				}
            				/* default */{
HXLINE( 132)					Float xposChild5 = (xpos + this->marginLeft(child));
HXDLIN( 132)					xposChild = (xposChild5 - this->marginRight(child));
            				}
            				_hx_goto_9:;
HXLINE( 134)				::String _hx_switch_1 = valign;
            				if (  (_hx_switch_1==HX_("bottom",eb,e6,78,65)) ){
HXLINE( 138)					Float rowHeights1 = rowHeights->__get(rowIndex);
HXDLIN( 138)					Float yposChild1 = (ypos + (rowHeights1 - child->get_componentHeight()));
HXDLIN( 138)					Float yposChild2 = (yposChild1 + this->marginTop(child));
HXDLIN( 138)					yposChild = (yposChild2 - this->marginBottom(child));
HXDLIN( 138)					goto _hx_goto_10;
            				}
            				if (  (_hx_switch_1==HX_("center",d5,25,db,05)) ){
HXLINE( 136)					Float rowHeights2 = rowHeights->__get(rowIndex);
HXDLIN( 136)					Float yposChild3 = (ypos + ((rowHeights2 - child->get_componentHeight()) * ((Float)0.5)));
HXDLIN( 136)					Float yposChild4 = (yposChild3 + this->marginTop(child));
HXDLIN( 136)					yposChild = (yposChild4 - this->marginBottom(child));
HXDLIN( 136)					goto _hx_goto_10;
            				}
            				/* default */{
HXLINE( 140)					Float yposChild5 = (ypos + this->marginTop(child));
HXDLIN( 140)					yposChild = (yposChild5 - this->marginBottom(child));
            				}
            				_hx_goto_10:;
HXLINE( 143)				child->moveComponent(xposChild,yposChild);
HXLINE( 145)				Float rowHeights3 = rowHeights->__get(rowIndex);
HXDLIN( 145)				ypos = (ypos + (rowHeights3 + this->get_verticalSpacing()));
HXLINE( 147)				rowIndex = (rowIndex + (int)1);
HXLINE( 148)				if ((rowIndex >= this->_rows)) {
HXLINE( 149)					ypos = this->get_paddingTop();
HXLINE( 150)					Float columnWidths3 = columnWidths->__get(columnIndex);
HXDLIN( 150)					xpos = (xpos + (columnWidths3 + this->get_horizontalSpacing()));
HXLINE( 151)					rowIndex = (int)0;
HXLINE( 152)					columnIndex = (columnIndex + (int)1);
            				}
            			}
            		}
            	}


::Array< Float > HorizontalGridLayout_obj::calcColumnWidths( ::haxe::ui::util::Size usableSize,bool includePercentage){
            	HX_STACKFRAME(&_hx_pos_900920518040509e_157_calcColumnWidths)
HXLINE( 158)		int visibleChildren = this->get_component()->get_childComponents()->length;
HXLINE( 159)		{
HXLINE( 159)			int _g = (int)0;
HXDLIN( 159)			::Array< ::Dynamic> _g1 = this->get_component()->get_childComponents();
HXDLIN( 159)			while((_g < _g1->length)){
HXLINE( 159)				 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 159)				_g = (_g + (int)1);
HXLINE( 160)				if ((child->get_includeInLayout() == false)) {
HXLINE( 161)					visibleChildren = (visibleChildren - (int)1);
            				}
            			}
            		}
HXLINE( 165)		int columnCount = ::Std_obj::_hx_int(((Float)visibleChildren / (Float)this->_rows));
HXLINE( 166)		if ((hx::Mod(visibleChildren,this->_rows) != (int)0)) {
HXLINE( 167)			columnCount = (columnCount + (int)1);
            		}
HXLINE( 170)		::Array< Float > columnWidths = ::Array_obj< Float >::__new();
HXLINE( 171)		{
HXLINE( 171)			int _g11 = (int)0;
HXDLIN( 171)			int _g2 = columnCount;
HXDLIN( 171)			while((_g11 < _g2)){
HXLINE( 171)				_g11 = (_g11 + (int)1);
HXDLIN( 171)				int n = (_g11 - (int)1);
HXLINE( 172)				columnWidths->push((int)0);
            			}
            		}
HXLINE( 175)		int rowIndex = (int)0;
HXLINE( 176)		int columnIndex = (int)0;
HXLINE( 177)		{
HXLINE( 177)			int _g3 = (int)0;
HXDLIN( 177)			::Array< ::Dynamic> _g12 = this->get_component()->get_childComponents();
HXDLIN( 177)			while((_g3 < _g12->length)){
HXLINE( 177)				 ::haxe::ui::core::Component child1 = _g12->__get(_g3).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 177)				_g3 = (_g3 + (int)1);
HXLINE( 179)				if ((child1->get_includeInLayout() == false)) {
HXLINE( 180)					continue;
            				}
HXLINE( 183)				if (hx::IsNull( child1->get_percentWidth() )) {
HXLINE( 184)					 ::Dynamic _hx_tmp = child1->get_componentWidth();
HXDLIN( 184)					if (hx::IsGreater( _hx_tmp,columnWidths->__get(columnIndex) )) {
HXLINE( 185)						columnWidths[columnIndex] = child1->get_componentWidth();
            					}
            				}
HXLINE( 188)				rowIndex = (rowIndex + (int)1);
HXLINE( 189)				if ((rowIndex >= this->_rows)) {
HXLINE( 190)					rowIndex = (int)0;
HXLINE( 191)					columnIndex = (columnIndex + (int)1);
            				}
            			}
            		}
HXLINE( 195)		if (includePercentage) {
HXLINE( 197)			::Array< Float > copy = columnWidths->copy();
HXLINE( 199)			rowIndex = (int)0;
HXLINE( 200)			columnIndex = (int)0;
HXLINE( 201)			{
HXLINE( 201)				int _g4 = (int)0;
HXDLIN( 201)				::Array< ::Dynamic> _g13 = this->get_component()->get_childComponents();
HXDLIN( 201)				while((_g4 < _g13->length)){
HXLINE( 201)					 ::haxe::ui::core::Component child2 = _g13->__get(_g4).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 201)					_g4 = (_g4 + (int)1);
HXLINE( 203)					if ((child2->get_includeInLayout() == false)) {
HXLINE( 204)						continue;
            					}
HXLINE( 207)					if (hx::IsNotNull( child2->get_percentWidth() )) {
HXLINE( 208)						Float usableSize1 = usableSize->width;
HXDLIN( 208)						Float cx = ((Float)(usableSize1 * child2->get_percentWidth()) / (Float)(int)100);
HXLINE( 209)						bool _hx_tmp1;
HXDLIN( 209)						if ((cx > columnWidths->__get(rowIndex))) {
HXLINE( 209)							_hx_tmp1 = (this->_rows == (int)1);
            						}
            						else {
HXLINE( 209)							_hx_tmp1 = false;
            						}
HXDLIN( 209)						if (_hx_tmp1) {
HXLINE( 210)							columnWidths[columnIndex] = cx;
            						}
            						else {
HXLINE( 211)							Float usableSize2 = usableSize->width;
HXDLIN( 211)							if ((usableSize2 > columnWidths->__get(columnIndex))) {
HXLINE( 212)								columnWidths[columnIndex] = usableSize->width;
            							}
            						}
            					}
HXLINE( 216)					rowIndex = (rowIndex + (int)1);
HXLINE( 217)					if ((rowIndex >= this->_rows)) {
HXLINE( 218)						rowIndex = (int)0;
HXLINE( 219)						columnIndex = (columnIndex + (int)1);
            					}
            				}
            			}
            		}
HXLINE( 224)		return columnWidths;
            	}


HX_DEFINE_DYNAMIC_FUNC2(HorizontalGridLayout_obj,calcColumnWidths,return )

::Array< Float > HorizontalGridLayout_obj::calcRowHeights( ::haxe::ui::util::Size usableSize,bool includePercentage){
            	HX_STACKFRAME(&_hx_pos_900920518040509e_227_calcRowHeights)
HXLINE( 228)		::Array< Float > rowHeights = ::Array_obj< Float >::__new();
HXLINE( 229)		{
HXLINE( 229)			int _g1 = (int)0;
HXDLIN( 229)			int _g = this->_rows;
HXDLIN( 229)			while((_g1 < _g)){
HXLINE( 229)				_g1 = (_g1 + (int)1);
HXDLIN( 229)				int n = (_g1 - (int)1);
HXLINE( 230)				rowHeights->push((int)0);
            			}
            		}
HXLINE( 232)		int rowIndex = (int)0;
HXLINE( 233)		int columnIndex = (int)0;
HXLINE( 234)		{
HXLINE( 234)			int _g2 = (int)0;
HXDLIN( 234)			::Array< ::Dynamic> _g11 = this->get_component()->get_childComponents();
HXDLIN( 234)			while((_g2 < _g11->length)){
HXLINE( 234)				 ::haxe::ui::core::Component child = _g11->__get(_g2).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 234)				_g2 = (_g2 + (int)1);
HXLINE( 236)				if ((child->get_includeInLayout() == false)) {
HXLINE( 237)					continue;
            				}
HXLINE( 240)				if (hx::IsNull( child->get_percentHeight() )) {
HXLINE( 241)					 ::Dynamic _hx_tmp = child->get_componentHeight();
HXDLIN( 241)					if (hx::IsGreater( _hx_tmp,rowHeights->__get(rowIndex) )) {
HXLINE( 242)						rowHeights[rowIndex] = child->get_componentHeight();
            					}
            				}
HXLINE( 246)				rowIndex = (rowIndex + (int)1);
HXLINE( 247)				if ((rowIndex >= this->_rows)) {
HXLINE( 248)					rowIndex = (int)0;
HXLINE( 249)					columnIndex = (columnIndex + (int)1);
            				}
            			}
            		}
HXLINE( 253)		if (includePercentage) {
HXLINE( 255)			::Array< Float > copy = rowHeights->copy();
HXLINE( 257)			rowIndex = (int)0;
HXLINE( 258)			columnIndex = (int)0;
HXLINE( 259)			{
HXLINE( 259)				int _g3 = (int)0;
HXDLIN( 259)				::Array< ::Dynamic> _g12 = this->get_component()->get_childComponents();
HXDLIN( 259)				while((_g3 < _g12->length)){
HXLINE( 259)					 ::haxe::ui::core::Component child1 = _g12->__get(_g3).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 259)					_g3 = (_g3 + (int)1);
HXLINE( 261)					if ((child1->get_includeInLayout() == false)) {
HXLINE( 262)						continue;
            					}
HXLINE( 264)					if (hx::IsNotNull( child1->get_percentHeight() )) {
HXLINE( 265)						Float usableSize1 = usableSize->height;
HXDLIN( 265)						Float cy = ((Float)(usableSize1 * child1->get_percentHeight()) / (Float)(int)100);
HXLINE( 266)						if ((cy > rowHeights->__get(rowIndex))) {
HXLINE( 267)							rowHeights[rowIndex] = cy;
            						}
            					}
HXLINE( 271)					rowIndex = (rowIndex + (int)1);
HXLINE( 272)					if ((rowIndex >= this->_rows)) {
HXLINE( 273)						rowIndex = (int)0;
HXLINE( 274)						columnIndex = (columnIndex + (int)1);
            					}
            				}
            			}
            		}
HXLINE( 279)		return rowHeights;
            	}


HX_DEFINE_DYNAMIC_FUNC2(HorizontalGridLayout_obj,calcRowHeights,return )

::Array< bool > HorizontalGridLayout_obj::calcExplicitWidths(){
            	HX_STACKFRAME(&_hx_pos_900920518040509e_282_calcExplicitWidths)
HXLINE( 283)		int visibleChildren = this->get_component()->get_childComponents()->length;
HXLINE( 284)		{
HXLINE( 284)			int _g = (int)0;
HXDLIN( 284)			::Array< ::Dynamic> _g1 = this->get_component()->get_childComponents();
HXDLIN( 284)			while((_g < _g1->length)){
HXLINE( 284)				 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 284)				_g = (_g + (int)1);
HXLINE( 285)				if ((child->get_includeInLayout() == false)) {
HXLINE( 286)					visibleChildren = (visibleChildren - (int)1);
            				}
            			}
            		}
HXLINE( 290)		int columnCount = ::Std_obj::_hx_int(((Float)visibleChildren / (Float)this->_rows));
HXLINE( 291)		if ((hx::Mod(visibleChildren,this->_rows) != (int)0)) {
HXLINE( 292)			columnCount = (columnCount + (int)1);
            		}
HXLINE( 294)		::Array< bool > explicitWidths = ::Array_obj< bool >::__new();
HXLINE( 295)		{
HXLINE( 295)			int _g11 = (int)0;
HXDLIN( 295)			int _g2 = columnCount;
HXDLIN( 295)			while((_g11 < _g2)){
HXLINE( 295)				_g11 = (_g11 + (int)1);
HXDLIN( 295)				int n = (_g11 - (int)1);
HXLINE( 296)				explicitWidths->push(false);
            			}
            		}
HXLINE( 299)		int rowIndex = (int)0;
HXLINE( 300)		int columnIndex = (int)0;
HXLINE( 301)		{
HXLINE( 301)			int _g3 = (int)0;
HXDLIN( 301)			::Array< ::Dynamic> _g12 = this->get_component()->get_childComponents();
HXDLIN( 301)			while((_g3 < _g12->length)){
HXLINE( 301)				 ::haxe::ui::core::Component child1 = _g12->__get(_g3).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 301)				_g3 = (_g3 + (int)1);
HXLINE( 302)				if ((child1->get_includeInLayout() == false)) {
HXLINE( 303)					continue;
            				}
HXLINE( 306)				bool _hx_tmp;
HXDLIN( 306)				if (hx::IsNull( child1->get_percentWidth() )) {
HXLINE( 306)					_hx_tmp = hx::IsGreater( child1->get_componentWidth(),(int)0 );
            				}
            				else {
HXLINE( 306)					_hx_tmp = false;
            				}
HXDLIN( 306)				if (_hx_tmp) {
HXLINE( 307)					explicitWidths[hx::Mod(rowIndex,this->_rows)] = true;
            				}
HXLINE( 310)				rowIndex = (rowIndex + (int)1);
HXLINE( 311)				if ((rowIndex >= this->_rows)) {
HXLINE( 312)					rowIndex = (int)0;
HXLINE( 313)					columnIndex = (columnIndex + (int)1);
            				}
            			}
            		}
HXLINE( 317)		return explicitWidths;
            	}


HX_DEFINE_DYNAMIC_FUNC0(HorizontalGridLayout_obj,calcExplicitWidths,return )

::Array< bool > HorizontalGridLayout_obj::calcExplicitHeights(){
            	HX_STACKFRAME(&_hx_pos_900920518040509e_320_calcExplicitHeights)
HXLINE( 321)		::Array< bool > explicitHeights = ::Array_obj< bool >::__new();
HXLINE( 322)		{
HXLINE( 322)			int _g1 = (int)0;
HXDLIN( 322)			int _g = this->_rows;
HXDLIN( 322)			while((_g1 < _g)){
HXLINE( 322)				_g1 = (_g1 + (int)1);
HXDLIN( 322)				int n = (_g1 - (int)1);
HXLINE( 323)				explicitHeights->push(false);
            			}
            		}
HXLINE( 326)		int rowIndex = (int)0;
HXLINE( 327)		int columnIndex = (int)0;
HXLINE( 328)		{
HXLINE( 328)			int _g2 = (int)0;
HXDLIN( 328)			::Array< ::Dynamic> _g11 = this->get_component()->get_childComponents();
HXDLIN( 328)			while((_g2 < _g11->length)){
HXLINE( 328)				 ::haxe::ui::core::Component child = _g11->__get(_g2).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 328)				_g2 = (_g2 + (int)1);
HXLINE( 329)				if ((child->get_includeInLayout() == false)) {
HXLINE( 330)					continue;
            				}
HXLINE( 333)				bool _hx_tmp;
HXDLIN( 333)				if (hx::IsNull( child->get_percentHeight() )) {
HXLINE( 333)					_hx_tmp = hx::IsGreater( child->get_componentHeight(),(int)0 );
            				}
            				else {
HXLINE( 333)					_hx_tmp = false;
            				}
HXDLIN( 333)				if (_hx_tmp) {
HXLINE( 334)					explicitHeights[rowIndex] = true;
            				}
HXLINE( 337)				rowIndex = (rowIndex + (int)1);
HXLINE( 338)				if ((rowIndex >= this->_rows)) {
HXLINE( 339)					rowIndex = (int)0;
HXLINE( 340)					columnIndex = (columnIndex + (int)1);
            				}
            			}
            		}
HXLINE( 344)		return explicitHeights;
            	}


HX_DEFINE_DYNAMIC_FUNC0(HorizontalGridLayout_obj,calcExplicitHeights,return )


hx::ObjectPtr< HorizontalGridLayout_obj > HorizontalGridLayout_obj::__new() {
	hx::ObjectPtr< HorizontalGridLayout_obj > __this = new HorizontalGridLayout_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< HorizontalGridLayout_obj > HorizontalGridLayout_obj::__alloc(hx::Ctx *_hx_ctx) {
	HorizontalGridLayout_obj *__this = (HorizontalGridLayout_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(HorizontalGridLayout_obj), true, "haxe.ui.layouts.HorizontalGridLayout"));
	*(void **)__this = HorizontalGridLayout_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

HorizontalGridLayout_obj::HorizontalGridLayout_obj()
{
}

hx::Val HorizontalGridLayout_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"rows") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_rows() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_rows") ) { return hx::Val( _rows ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_rows") ) { return hx::Val( get_rows_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_rows") ) { return hx::Val( set_rows_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_usableSize") ) { return hx::Val( get_usableSize_dyn() ); }
		if (HX_FIELD_EQ(inName,"resizeChildren") ) { return hx::Val( resizeChildren_dyn() ); }
		if (HX_FIELD_EQ(inName,"calcRowHeights") ) { return hx::Val( calcRowHeights_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"calcColumnWidths") ) { return hx::Val( calcColumnWidths_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"repositionChildren") ) { return hx::Val( repositionChildren_dyn() ); }
		if (HX_FIELD_EQ(inName,"calcExplicitWidths") ) { return hx::Val( calcExplicitWidths_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"calcExplicitHeights") ) { return hx::Val( calcExplicitHeights_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val HorizontalGridLayout_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"rows") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_rows(inValue.Cast< int >()) ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_rows") ) { _rows=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void HorizontalGridLayout_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_rows","\xf8","\x10","\xc0","\xfe"));
	outFields->push(HX_HCSTRING("rows","\x19","\xf5","\xae","\x4b"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo HorizontalGridLayout_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(HorizontalGridLayout_obj,_rows),HX_HCSTRING("_rows","\xf8","\x10","\xc0","\xfe")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *HorizontalGridLayout_obj_sStaticStorageInfo = 0;
#endif

static ::String HorizontalGridLayout_obj_sMemberFields[] = {
	HX_HCSTRING("_rows","\xf8","\x10","\xc0","\xfe"),
	HX_HCSTRING("get_rows","\xa2","\xb0","\x69","\xcb"),
	HX_HCSTRING("set_rows","\x16","\x0a","\xc7","\x79"),
	HX_HCSTRING("get_usableSize","\x22","\x8c","\xf5","\x3e"),
	HX_HCSTRING("resizeChildren","\x53","\x43","\x30","\xc1"),
	HX_HCSTRING("repositionChildren","\xbb","\x00","\xc7","\x9c"),
	HX_HCSTRING("calcColumnWidths","\x58","\x87","\x15","\xec"),
	HX_HCSTRING("calcRowHeights","\xa7","\x88","\x42","\xbc"),
	HX_HCSTRING("calcExplicitWidths","\x36","\xfd","\x11","\xed"),
	HX_HCSTRING("calcExplicitHeights","\x03","\x4d","\xe5","\x51"),
	::String(null()) };

static void HorizontalGridLayout_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(HorizontalGridLayout_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void HorizontalGridLayout_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(HorizontalGridLayout_obj::__mClass,"__mClass");
};

#endif

hx::Class HorizontalGridLayout_obj::__mClass;

void HorizontalGridLayout_obj::__register()
{
	hx::Object *dummy = new HorizontalGridLayout_obj;
	HorizontalGridLayout_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.layouts.HorizontalGridLayout","\x4b","\xe0","\x45","\x8d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = HorizontalGridLayout_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(HorizontalGridLayout_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< HorizontalGridLayout_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = HorizontalGridLayout_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = HorizontalGridLayout_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = HorizontalGridLayout_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace layouts
