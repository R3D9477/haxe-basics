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
#ifndef INCLUDED_haxe_ui_layouts_ILayout
#include <haxe/ui/layouts/ILayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_Layout
#include <haxe/ui/layouts/Layout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_VerticalGridLayout
#include <haxe/ui/layouts/VerticalGridLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_util_Size
#include <haxe/ui/util/Size.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_a7572e77df9ffc70_5_new,"haxe.ui.layouts.VerticalGridLayout","new",0x6c0ff20f,"haxe.ui.layouts.VerticalGridLayout.new","haxe/ui/layouts/VerticalGridLayout.hx",5,0xf2e87400)
HX_LOCAL_STACK_FRAME(_hx_pos_a7572e77df9ffc70_9_get_columns,"haxe.ui.layouts.VerticalGridLayout","get_columns",0x529ff5a3,"haxe.ui.layouts.VerticalGridLayout.get_columns","haxe/ui/layouts/VerticalGridLayout.hx",9,0xf2e87400)
HX_LOCAL_STACK_FRAME(_hx_pos_a7572e77df9ffc70_11_set_columns,"haxe.ui.layouts.VerticalGridLayout","set_columns",0x5d0cfcaf,"haxe.ui.layouts.VerticalGridLayout.set_columns","haxe/ui/layouts/VerticalGridLayout.hx",11,0xf2e87400)
HX_LOCAL_STACK_FRAME(_hx_pos_a7572e77df9ffc70_27_get_usableSize,"haxe.ui.layouts.VerticalGridLayout","get_usableSize",0xd3b6fad3,"haxe.ui.layouts.VerticalGridLayout.get_usableSize","haxe/ui/layouts/VerticalGridLayout.hx",27,0xf2e87400)
HX_LOCAL_STACK_FRAME(_hx_pos_a7572e77df9ffc70_56_resizeChildren,"haxe.ui.layouts.VerticalGridLayout","resizeChildren",0x55f1b204,"haxe.ui.layouts.VerticalGridLayout.resizeChildren","haxe/ui/layouts/VerticalGridLayout.hx",56,0xf2e87400)
HX_LOCAL_STACK_FRAME(_hx_pos_a7572e77df9ffc70_106_repositionChildren,"haxe.ui.layouts.VerticalGridLayout","repositionChildren",0x23c41bec,"haxe.ui.layouts.VerticalGridLayout.repositionChildren","haxe/ui/layouts/VerticalGridLayout.hx",106,0xf2e87400)
HX_LOCAL_STACK_FRAME(_hx_pos_a7572e77df9ffc70_157_calcColumnWidths,"haxe.ui.layouts.VerticalGridLayout","calcColumnWidths",0x4714c449,"haxe.ui.layouts.VerticalGridLayout.calcColumnWidths","haxe/ui/layouts/VerticalGridLayout.hx",157,0xf2e87400)
HX_LOCAL_STACK_FRAME(_hx_pos_a7572e77df9ffc70_212_calcRowHeights,"haxe.ui.layouts.VerticalGridLayout","calcRowHeights",0x5103f758,"haxe.ui.layouts.VerticalGridLayout.calcRowHeights","haxe/ui/layouts/VerticalGridLayout.hx",212,0xf2e87400)
HX_LOCAL_STACK_FRAME(_hx_pos_a7572e77df9ffc70_282_calcExplicitWidths,"haxe.ui.layouts.VerticalGridLayout","calcExplicitWidths",0x740f1867,"haxe.ui.layouts.VerticalGridLayout.calcExplicitWidths","haxe/ui/layouts/VerticalGridLayout.hx",282,0xf2e87400)
HX_LOCAL_STACK_FRAME(_hx_pos_a7572e77df9ffc70_309_calcExplicitHeights,"haxe.ui.layouts.VerticalGridLayout","calcExplicitHeights",0xe85ffcb2,"haxe.ui.layouts.VerticalGridLayout.calcExplicitHeights","haxe/ui/layouts/VerticalGridLayout.hx",309,0xf2e87400)
namespace haxe{
namespace ui{
namespace layouts{

void VerticalGridLayout_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_a7572e77df9ffc70_5_new)
HXLINE(   6)		this->_columns = (int)1;
HXLINE(  24)		super::__construct();
            	}

Dynamic VerticalGridLayout_obj::__CreateEmpty() { return new VerticalGridLayout_obj; }

void *VerticalGridLayout_obj::_hx_vtable = 0;

Dynamic VerticalGridLayout_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< VerticalGridLayout_obj > _hx_result = new VerticalGridLayout_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool VerticalGridLayout_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x43881bf1) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x43881bf1;
	} else {
		return inClassId==(int)0x548a03f5;
	}
}

int VerticalGridLayout_obj::get_columns(){
            	HX_STACKFRAME(&_hx_pos_a7572e77df9ffc70_9_get_columns)
HXDLIN(   9)		return this->_columns;
            	}


HX_DEFINE_DYNAMIC_FUNC0(VerticalGridLayout_obj,get_columns,return )

int VerticalGridLayout_obj::set_columns(int value){
            	HX_STACKFRAME(&_hx_pos_a7572e77df9ffc70_11_set_columns)
HXLINE(  12)		if ((this->_columns == value)) {
HXLINE(  13)			return value;
            		}
HXLINE(  16)		this->_columns = value;
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


HX_DEFINE_DYNAMIC_FUNC1(VerticalGridLayout_obj,set_columns,return )

 ::haxe::ui::util::Size VerticalGridLayout_obj::get_usableSize(){
            	HX_STACKFRAME(&_hx_pos_a7572e77df9ffc70_27_get_usableSize)
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
HXLINE(  41)			int rows = this->get_component()->get_childComponents()->length;
HXDLIN(  41)			int rows1 = ::Math_obj::ceil(((Float)rows / (Float)this->get_columns()));
HXLINE(  42)			 ::haxe::ui::util::Size size3 = size;
HXDLIN(  42)			Float size4 = size3->width;
HXDLIN(  42)			Float _hx_tmp = this->get_horizontalSpacing();
HXDLIN(  42)			size3->width = (size4 - (_hx_tmp * (this->get_columns() - (int)1)));
HXLINE(  43)			 ::haxe::ui::util::Size size5 = size;
HXDLIN(  43)			Float size6 = size5->height;
HXDLIN(  43)			Float _hx_tmp1 = this->get_verticalSpacing();
HXDLIN(  43)			size5->height = (size6 - (_hx_tmp1 * (rows1 - (int)1)));
            		}
HXLINE(  46)		if ((size->width < (int)0)) {
HXLINE(  47)			size->width = (int)0;
            		}
HXLINE(  50)		if ((size->height < (int)0)) {
HXLINE(  51)			size->height = (int)0;
            		}
HXLINE(  53)		return size;
            	}


void VerticalGridLayout_obj::resizeChildren(){
            	HX_STACKFRAME(&_hx_pos_a7572e77df9ffc70_56_resizeChildren)
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
HXLINE(  98)				columnIndex = (columnIndex + (int)1);
HXLINE(  99)				if ((columnIndex >= this->_columns)) {
HXLINE( 100)					columnIndex = (int)0;
HXLINE( 101)					rowIndex = (rowIndex + (int)1);
            				}
            			}
            		}
            	}


void VerticalGridLayout_obj::repositionChildren(){
            	HX_STACKFRAME(&_hx_pos_a7572e77df9ffc70_106_repositionChildren)
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
HXLINE( 145)				Float columnWidths3 = columnWidths->__get(columnIndex);
HXDLIN( 145)				xpos = (xpos + (columnWidths3 + this->get_horizontalSpacing()));
HXLINE( 147)				columnIndex = (columnIndex + (int)1);
HXLINE( 148)				if ((columnIndex >= this->get_columns())) {
HXLINE( 149)					xpos = this->get_paddingLeft();
HXLINE( 150)					Float rowHeights3 = rowHeights->__get(rowIndex);
HXDLIN( 150)					ypos = (ypos + (rowHeights3 + this->get_verticalSpacing()));
HXLINE( 151)					columnIndex = (int)0;
HXLINE( 152)					rowIndex = (rowIndex + (int)1);
            				}
            			}
            		}
            	}


::Array< Float > VerticalGridLayout_obj::calcColumnWidths( ::haxe::ui::util::Size usableSize,bool includePercentage){
            	HX_STACKFRAME(&_hx_pos_a7572e77df9ffc70_157_calcColumnWidths)
HXLINE( 158)		::Array< Float > columnWidths = ::Array_obj< Float >::__new();
HXLINE( 159)		{
HXLINE( 159)			int _g1 = (int)0;
HXDLIN( 159)			int _g = this->_columns;
HXDLIN( 159)			while((_g1 < _g)){
HXLINE( 159)				_g1 = (_g1 + (int)1);
HXDLIN( 159)				int n = (_g1 - (int)1);
HXLINE( 160)				columnWidths->push((int)0);
            			}
            		}
HXLINE( 162)		int rowIndex = (int)0;
HXLINE( 163)		int columnIndex = (int)0;
HXLINE( 164)		{
HXLINE( 164)			int _g2 = (int)0;
HXDLIN( 164)			::Array< ::Dynamic> _g11 = this->get_component()->get_childComponents();
HXDLIN( 164)			while((_g2 < _g11->length)){
HXLINE( 164)				 ::haxe::ui::core::Component child = _g11->__get(_g2).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 164)				_g2 = (_g2 + (int)1);
HXLINE( 166)				if ((child->get_includeInLayout() == false)) {
HXLINE( 167)					continue;
            				}
HXLINE( 170)				if (hx::IsNull( child->get_percentWidth() )) {
HXLINE( 171)					 ::Dynamic _hx_tmp = child->get_componentWidth();
HXDLIN( 171)					if (hx::IsGreater( _hx_tmp,columnWidths->__get(columnIndex) )) {
HXLINE( 172)						columnWidths[columnIndex] = child->get_componentWidth();
            					}
            				}
HXLINE( 176)				columnIndex = (columnIndex + (int)1);
HXLINE( 177)				if ((columnIndex >= this->_columns)) {
HXLINE( 178)					columnIndex = (int)0;
HXLINE( 179)					rowIndex = (rowIndex + (int)1);
            				}
            			}
            		}
HXLINE( 183)		if (includePercentage) {
HXLINE( 185)			::Array< Float > copy = columnWidths->copy();
HXLINE( 187)			rowIndex = (int)0;
HXLINE( 188)			columnIndex = (int)0;
HXLINE( 189)			{
HXLINE( 189)				int _g3 = (int)0;
HXDLIN( 189)				::Array< ::Dynamic> _g12 = this->get_component()->get_childComponents();
HXDLIN( 189)				while((_g3 < _g12->length)){
HXLINE( 189)					 ::haxe::ui::core::Component child1 = _g12->__get(_g3).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 189)					_g3 = (_g3 + (int)1);
HXLINE( 191)					if ((child1->get_includeInLayout() == false)) {
HXLINE( 192)						continue;
            					}
HXLINE( 194)					if (hx::IsNotNull( child1->get_percentWidth() )) {
HXLINE( 195)						Float usableSize1 = usableSize->width;
HXDLIN( 195)						Float cx = ((Float)(usableSize1 * child1->get_percentWidth()) / (Float)(int)100);
HXLINE( 196)						if ((cx > columnWidths->__get(columnIndex))) {
HXLINE( 197)							columnWidths[columnIndex] = cx;
            						}
            					}
HXLINE( 201)					columnIndex = (columnIndex + (int)1);
HXLINE( 202)					if ((columnIndex >= this->_columns)) {
HXLINE( 203)						columnIndex = (int)0;
HXLINE( 204)						rowIndex = (rowIndex + (int)1);
            					}
            				}
            			}
            		}
HXLINE( 209)		return columnWidths;
            	}


HX_DEFINE_DYNAMIC_FUNC2(VerticalGridLayout_obj,calcColumnWidths,return )

::Array< Float > VerticalGridLayout_obj::calcRowHeights( ::haxe::ui::util::Size usableSize,bool includePercentage){
            	HX_STACKFRAME(&_hx_pos_a7572e77df9ffc70_212_calcRowHeights)
HXLINE( 213)		int visibleChildren = this->get_component()->get_childComponents()->length;
HXLINE( 214)		{
HXLINE( 214)			int _g = (int)0;
HXDLIN( 214)			::Array< ::Dynamic> _g1 = this->get_component()->get_childComponents();
HXDLIN( 214)			while((_g < _g1->length)){
HXLINE( 214)				 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 214)				_g = (_g + (int)1);
HXLINE( 215)				if ((child->get_includeInLayout() == false)) {
HXLINE( 216)					visibleChildren = (visibleChildren - (int)1);
            				}
            			}
            		}
HXLINE( 220)		int rowCount = ::Std_obj::_hx_int(((Float)visibleChildren / (Float)this->_columns));
HXLINE( 221)		if ((hx::Mod(visibleChildren,this->_columns) != (int)0)) {
HXLINE( 222)			rowCount = (rowCount + (int)1);
            		}
HXLINE( 225)		::Array< Float > rowHeights = ::Array_obj< Float >::__new();
HXLINE( 226)		{
HXLINE( 226)			int _g11 = (int)0;
HXDLIN( 226)			int _g2 = rowCount;
HXDLIN( 226)			while((_g11 < _g2)){
HXLINE( 226)				_g11 = (_g11 + (int)1);
HXDLIN( 226)				int n = (_g11 - (int)1);
HXLINE( 227)				rowHeights->push((int)0);
            			}
            		}
HXLINE( 230)		int rowIndex = (int)0;
HXLINE( 231)		int columnIndex = (int)0;
HXLINE( 232)		{
HXLINE( 232)			int _g3 = (int)0;
HXDLIN( 232)			::Array< ::Dynamic> _g12 = this->get_component()->get_childComponents();
HXDLIN( 232)			while((_g3 < _g12->length)){
HXLINE( 232)				 ::haxe::ui::core::Component child1 = _g12->__get(_g3).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 232)				_g3 = (_g3 + (int)1);
HXLINE( 234)				if ((child1->get_includeInLayout() == false)) {
HXLINE( 235)					continue;
            				}
HXLINE( 238)				if (hx::IsNull( child1->get_percentHeight() )) {
HXLINE( 239)					 ::Dynamic _hx_tmp = child1->get_componentHeight();
HXDLIN( 239)					if (hx::IsGreater( _hx_tmp,rowHeights->__get(rowIndex) )) {
HXLINE( 240)						rowHeights[rowIndex] = child1->get_componentHeight();
            					}
            				}
HXLINE( 243)				columnIndex = (columnIndex + (int)1);
HXLINE( 244)				if ((columnIndex >= this->_columns)) {
HXLINE( 245)					columnIndex = (int)0;
HXLINE( 246)					rowIndex = (rowIndex + (int)1);
            				}
            			}
            		}
HXLINE( 250)		if (includePercentage) {
HXLINE( 252)			::Array< Float > copy = rowHeights->copy();
HXLINE( 254)			rowIndex = (int)0;
HXLINE( 255)			columnIndex = (int)0;
HXLINE( 256)			{
HXLINE( 256)				int _g4 = (int)0;
HXDLIN( 256)				::Array< ::Dynamic> _g13 = this->get_component()->get_childComponents();
HXDLIN( 256)				while((_g4 < _g13->length)){
HXLINE( 256)					 ::haxe::ui::core::Component child2 = _g13->__get(_g4).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 256)					_g4 = (_g4 + (int)1);
HXLINE( 258)					if ((child2->get_includeInLayout() == false)) {
HXLINE( 259)						continue;
            					}
HXLINE( 262)					if (hx::IsNotNull( child2->get_percentHeight() )) {
HXLINE( 263)						Float usableSize1 = usableSize->height;
HXDLIN( 263)						Float cy = ((Float)(usableSize1 * child2->get_percentHeight()) / (Float)(int)100);
HXLINE( 264)						bool _hx_tmp1;
HXDLIN( 264)						if ((cy > rowHeights->__get(rowIndex))) {
HXLINE( 264)							_hx_tmp1 = (this->_columns == (int)1);
            						}
            						else {
HXLINE( 264)							_hx_tmp1 = false;
            						}
HXDLIN( 264)						if (_hx_tmp1) {
HXLINE( 265)							rowHeights[rowIndex] = cy;
            						}
            						else {
HXLINE( 266)							Float usableSize2 = usableSize->height;
HXDLIN( 266)							if ((usableSize2 > rowHeights->__get(rowIndex))) {
HXLINE( 267)								rowHeights[rowIndex] = usableSize->height;
            							}
            						}
            					}
HXLINE( 271)					columnIndex = (columnIndex + (int)1);
HXLINE( 272)					if ((columnIndex >= this->_columns)) {
HXLINE( 273)						columnIndex = (int)0;
HXLINE( 274)						rowIndex = (rowIndex + (int)1);
            					}
            				}
            			}
            		}
HXLINE( 279)		return rowHeights;
            	}


HX_DEFINE_DYNAMIC_FUNC2(VerticalGridLayout_obj,calcRowHeights,return )

::Array< bool > VerticalGridLayout_obj::calcExplicitWidths(){
            	HX_STACKFRAME(&_hx_pos_a7572e77df9ffc70_282_calcExplicitWidths)
HXLINE( 283)		::Array< bool > explicitWidths = ::Array_obj< bool >::__new();
HXLINE( 284)		{
HXLINE( 284)			int _g1 = (int)0;
HXDLIN( 284)			int _g = this->_columns;
HXDLIN( 284)			while((_g1 < _g)){
HXLINE( 284)				_g1 = (_g1 + (int)1);
HXDLIN( 284)				int n = (_g1 - (int)1);
HXLINE( 285)				explicitWidths->push(false);
            			}
            		}
HXLINE( 288)		int rowIndex = (int)0;
HXLINE( 289)		int columnIndex = (int)0;
HXLINE( 290)		{
HXLINE( 290)			int _g2 = (int)0;
HXDLIN( 290)			::Array< ::Dynamic> _g11 = this->get_component()->get_childComponents();
HXDLIN( 290)			while((_g2 < _g11->length)){
HXLINE( 290)				 ::haxe::ui::core::Component child = _g11->__get(_g2).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 290)				_g2 = (_g2 + (int)1);
HXLINE( 291)				if ((child->get_includeInLayout() == false)) {
HXLINE( 292)					continue;
            				}
HXLINE( 295)				bool _hx_tmp;
HXDLIN( 295)				if (hx::IsNull( child->get_percentWidth() )) {
HXLINE( 295)					_hx_tmp = hx::IsGreater( child->get_componentWidth(),(int)0 );
            				}
            				else {
HXLINE( 295)					_hx_tmp = false;
            				}
HXDLIN( 295)				if (_hx_tmp) {
HXLINE( 296)					explicitWidths[columnIndex] = true;
            				}
HXLINE( 299)				columnIndex = (columnIndex + (int)1);
HXLINE( 300)				if ((columnIndex >= this->_columns)) {
HXLINE( 301)					columnIndex = (int)0;
HXLINE( 302)					rowIndex = (rowIndex + (int)1);
            				}
            			}
            		}
HXLINE( 306)		return explicitWidths;
            	}


HX_DEFINE_DYNAMIC_FUNC0(VerticalGridLayout_obj,calcExplicitWidths,return )

::Array< bool > VerticalGridLayout_obj::calcExplicitHeights(){
            	HX_STACKFRAME(&_hx_pos_a7572e77df9ffc70_309_calcExplicitHeights)
HXLINE( 310)		int visibleChildren = this->get_component()->get_childComponents()->length;
HXLINE( 311)		{
HXLINE( 311)			int _g = (int)0;
HXDLIN( 311)			::Array< ::Dynamic> _g1 = this->get_component()->get_childComponents();
HXDLIN( 311)			while((_g < _g1->length)){
HXLINE( 311)				 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 311)				_g = (_g + (int)1);
HXLINE( 312)				if ((child->get_includeInLayout() == false)) {
HXLINE( 313)					visibleChildren = (visibleChildren - (int)1);
            				}
            			}
            		}
HXLINE( 317)		int rowCount = ::Std_obj::_hx_int(((Float)visibleChildren / (Float)this->get_columns()));
HXLINE( 318)		if ((hx::Mod(visibleChildren,this->_columns) != (int)0)) {
HXLINE( 319)			rowCount = (rowCount + (int)1);
            		}
HXLINE( 321)		::Array< bool > explicitHeights = ::Array_obj< bool >::__new();
HXLINE( 322)		{
HXLINE( 322)			int _g11 = (int)0;
HXDLIN( 322)			int _g2 = rowCount;
HXDLIN( 322)			while((_g11 < _g2)){
HXLINE( 322)				_g11 = (_g11 + (int)1);
HXDLIN( 322)				int n = (_g11 - (int)1);
HXLINE( 323)				explicitHeights->push(false);
            			}
            		}
HXLINE( 326)		int rowIndex = (int)0;
HXLINE( 327)		int columnIndex = (int)0;
HXLINE( 328)		{
HXLINE( 328)			int _g3 = (int)0;
HXDLIN( 328)			::Array< ::Dynamic> _g12 = this->get_component()->get_childComponents();
HXDLIN( 328)			while((_g3 < _g12->length)){
HXLINE( 328)				 ::haxe::ui::core::Component child1 = _g12->__get(_g3).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 328)				_g3 = (_g3 + (int)1);
HXLINE( 329)				if ((child1->get_includeInLayout() == false)) {
HXLINE( 330)					continue;
            				}
HXLINE( 333)				bool _hx_tmp;
HXDLIN( 333)				if (hx::IsNull( child1->get_percentHeight() )) {
HXLINE( 333)					_hx_tmp = hx::IsGreater( child1->get_componentHeight(),(int)0 );
            				}
            				else {
HXLINE( 333)					_hx_tmp = false;
            				}
HXDLIN( 333)				if (_hx_tmp) {
HXLINE( 334)					explicitHeights[hx::Mod(columnIndex,this->_columns)] = true;
            				}
HXLINE( 337)				columnIndex = (columnIndex + (int)1);
HXLINE( 338)				if ((columnIndex >= this->_columns)) {
HXLINE( 339)					columnIndex = (int)0;
HXLINE( 340)					rowIndex = (rowIndex + (int)1);
            				}
            			}
            		}
HXLINE( 344)		return explicitHeights;
            	}


HX_DEFINE_DYNAMIC_FUNC0(VerticalGridLayout_obj,calcExplicitHeights,return )


hx::ObjectPtr< VerticalGridLayout_obj > VerticalGridLayout_obj::__new() {
	hx::ObjectPtr< VerticalGridLayout_obj > __this = new VerticalGridLayout_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< VerticalGridLayout_obj > VerticalGridLayout_obj::__alloc(hx::Ctx *_hx_ctx) {
	VerticalGridLayout_obj *__this = (VerticalGridLayout_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(VerticalGridLayout_obj), true, "haxe.ui.layouts.VerticalGridLayout"));
	*(void **)__this = VerticalGridLayout_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

VerticalGridLayout_obj::VerticalGridLayout_obj()
{
}

hx::Val VerticalGridLayout_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"columns") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_columns() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_columns") ) { return hx::Val( _columns ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_columns") ) { return hx::Val( get_columns_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_columns") ) { return hx::Val( set_columns_dyn() ); }
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

hx::Val VerticalGridLayout_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"columns") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_columns(inValue.Cast< int >()) ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_columns") ) { _columns=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void VerticalGridLayout_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_columns","\x5e","\x06","\x12","\x2d"));
	outFields->push(HX_HCSTRING("columns","\xdd","\xac","\x59","\xf3"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo VerticalGridLayout_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(VerticalGridLayout_obj,_columns),HX_HCSTRING("_columns","\x5e","\x06","\x12","\x2d")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *VerticalGridLayout_obj_sStaticStorageInfo = 0;
#endif

static ::String VerticalGridLayout_obj_sMemberFields[] = {
	HX_HCSTRING("_columns","\x5e","\x06","\x12","\x2d"),
	HX_HCSTRING("get_columns","\xf4","\x0c","\x54","\x79"),
	HX_HCSTRING("set_columns","\x00","\x14","\xc1","\x83"),
	HX_HCSTRING("get_usableSize","\x22","\x8c","\xf5","\x3e"),
	HX_HCSTRING("resizeChildren","\x53","\x43","\x30","\xc1"),
	HX_HCSTRING("repositionChildren","\xbb","\x00","\xc7","\x9c"),
	HX_HCSTRING("calcColumnWidths","\x58","\x87","\x15","\xec"),
	HX_HCSTRING("calcRowHeights","\xa7","\x88","\x42","\xbc"),
	HX_HCSTRING("calcExplicitWidths","\x36","\xfd","\x11","\xed"),
	HX_HCSTRING("calcExplicitHeights","\x03","\x4d","\xe5","\x51"),
	::String(null()) };

static void VerticalGridLayout_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(VerticalGridLayout_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void VerticalGridLayout_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(VerticalGridLayout_obj::__mClass,"__mClass");
};

#endif

hx::Class VerticalGridLayout_obj::__mClass;

void VerticalGridLayout_obj::__register()
{
	hx::Object *dummy = new VerticalGridLayout_obj;
	VerticalGridLayout_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.layouts.VerticalGridLayout","\x9d","\x3e","\x74","\x45");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = VerticalGridLayout_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(VerticalGridLayout_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< VerticalGridLayout_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = VerticalGridLayout_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = VerticalGridLayout_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = VerticalGridLayout_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace layouts
