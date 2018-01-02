// GeneratedByHaxe
#include <hxcpp.h>

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
#ifndef INCLUDED_haxe_ui_styles_Style
#include <haxe/ui/styles/Style.h>
#endif
#ifndef INCLUDED_haxe_ui_util_Size
#include <haxe/ui/util/Size.h>
#endif
#ifndef INCLUDED_haxe_ui_util_VariantType
#include <haxe/ui/util/VariantType.h>
#endif
#ifndef INCLUDED_haxe_ui_util__Variant_Variant_Impl_
#include <haxe/ui/util/_Variant/Variant_Impl_.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_6d6d54713e6bb77b_7_new,"haxe.ui.layouts.Layout","new",0xae62da13,"haxe.ui.layouts.Layout.new","haxe/ui/layouts/Layout.hx",7,0xbf1b15fc)
HX_LOCAL_STACK_FRAME(_hx_pos_6d6d54713e6bb77b_14_get_component,"haxe.ui.layouts.Layout","get_component",0x34d10c07,"haxe.ui.layouts.Layout.get_component","haxe/ui/layouts/Layout.hx",14,0xbf1b15fc)
HX_LOCAL_STACK_FRAME(_hx_pos_6d6d54713e6bb77b_16_set_component,"haxe.ui.layouts.Layout","set_component",0x79d6ee13,"haxe.ui.layouts.Layout.set_component","haxe/ui/layouts/Layout.hx",16,0xbf1b15fc)
HX_LOCAL_STACK_FRAME(_hx_pos_6d6d54713e6bb77b_26_refresh,"haxe.ui.layouts.Layout","refresh",0xfaa2390e,"haxe.ui.layouts.Layout.refresh","haxe/ui/layouts/Layout.hx",26,0xbf1b15fc)
HX_LOCAL_STACK_FRAME(_hx_pos_6d6d54713e6bb77b_36_autoSize,"haxe.ui.layouts.Layout","autoSize",0xf32b7d3d,"haxe.ui.layouts.Layout.autoSize","haxe/ui/layouts/Layout.hx",36,0xbf1b15fc)
HX_LOCAL_STACK_FRAME(_hx_pos_6d6d54713e6bb77b_60_marginTop,"haxe.ui.layouts.Layout","marginTop",0x663e50fa,"haxe.ui.layouts.Layout.marginTop","haxe/ui/layouts/Layout.hx",60,0xbf1b15fc)
HX_LOCAL_STACK_FRAME(_hx_pos_6d6d54713e6bb77b_67_marginLeft,"haxe.ui.layouts.Layout","marginLeft",0x0af73602,"haxe.ui.layouts.Layout.marginLeft","haxe/ui/layouts/Layout.hx",67,0xbf1b15fc)
HX_LOCAL_STACK_FRAME(_hx_pos_6d6d54713e6bb77b_75_marginBottom,"haxe.ui.layouts.Layout","marginBottom",0xeb63c9a6,"haxe.ui.layouts.Layout.marginBottom","haxe/ui/layouts/Layout.hx",75,0xbf1b15fc)
HX_LOCAL_STACK_FRAME(_hx_pos_6d6d54713e6bb77b_83_marginRight,"haxe.ui.layouts.Layout","marginRight",0x04651981,"haxe.ui.layouts.Layout.marginRight","haxe/ui/layouts/Layout.hx",83,0xbf1b15fc)
HX_LOCAL_STACK_FRAME(_hx_pos_6d6d54713e6bb77b_91_hidden,"haxe.ui.layouts.Layout","hidden",0xfb23c797,"haxe.ui.layouts.Layout.hidden","haxe/ui/layouts/Layout.hx",91,0xbf1b15fc)
HX_LOCAL_STACK_FRAME(_hx_pos_6d6d54713e6bb77b_98_horizontalAlign,"haxe.ui.layouts.Layout","horizontalAlign",0x86f7d974,"haxe.ui.layouts.Layout.horizontalAlign","haxe/ui/layouts/Layout.hx",98,0xbf1b15fc)
HX_LOCAL_STACK_FRAME(_hx_pos_6d6d54713e6bb77b_105_verticalAlign,"haxe.ui.layouts.Layout","verticalAlign",0x489565e2,"haxe.ui.layouts.Layout.verticalAlign","haxe/ui/layouts/Layout.hx",105,0xbf1b15fc)
HX_LOCAL_STACK_FRAME(_hx_pos_6d6d54713e6bb77b_116_get_paddingLeft,"haxe.ui.layouts.Layout","get_paddingLeft",0xd9584c42,"haxe.ui.layouts.Layout.get_paddingLeft","haxe/ui/layouts/Layout.hx",116,0xbf1b15fc)
HX_LOCAL_STACK_FRAME(_hx_pos_6d6d54713e6bb77b_124_get_paddingTop,"haxe.ui.layouts.Layout","get_paddingTop",0xe200c2ba,"haxe.ui.layouts.Layout.get_paddingTop","haxe/ui/layouts/Layout.hx",124,0xbf1b15fc)
HX_LOCAL_STACK_FRAME(_hx_pos_6d6d54713e6bb77b_132_get_paddingBottom,"haxe.ui.layouts.Layout","get_paddingBottom",0xe4e6efe6,"haxe.ui.layouts.Layout.get_paddingBottom","haxe/ui/layouts/Layout.hx",132,0xbf1b15fc)
HX_LOCAL_STACK_FRAME(_hx_pos_6d6d54713e6bb77b_140_get_paddingRight,"haxe.ui.layouts.Layout","get_paddingRight",0xcaf77b41,"haxe.ui.layouts.Layout.get_paddingRight","haxe/ui/layouts/Layout.hx",140,0xbf1b15fc)
HX_LOCAL_STACK_FRAME(_hx_pos_6d6d54713e6bb77b_148_get_horizontalSpacing,"haxe.ui.layouts.Layout","get_horizontalSpacing",0x4b45f849,"haxe.ui.layouts.Layout.get_horizontalSpacing","haxe/ui/layouts/Layout.hx",148,0xbf1b15fc)
HX_LOCAL_STACK_FRAME(_hx_pos_6d6d54713e6bb77b_156_get_verticalSpacing,"haxe.ui.layouts.Layout","get_verticalSpacing",0xa49e6877,"haxe.ui.layouts.Layout.get_verticalSpacing","haxe/ui/layouts/Layout.hx",156,0xbf1b15fc)
HX_LOCAL_STACK_FRAME(_hx_pos_6d6d54713e6bb77b_170_get_innerWidth,"haxe.ui.layouts.Layout","get_innerWidth",0x18253a06,"haxe.ui.layouts.Layout.get_innerWidth","haxe/ui/layouts/Layout.hx",170,0xbf1b15fc)
HX_LOCAL_STACK_FRAME(_hx_pos_6d6d54713e6bb77b_178_get_innerHeight,"haxe.ui.layouts.Layout","get_innerHeight",0xbebd03e7,"haxe.ui.layouts.Layout.get_innerHeight","haxe/ui/layouts/Layout.hx",178,0xbf1b15fc)
HX_LOCAL_STACK_FRAME(_hx_pos_6d6d54713e6bb77b_193_resizeChildren,"haxe.ui.layouts.Layout","resizeChildren",0xf3358080,"haxe.ui.layouts.Layout.resizeChildren","haxe/ui/layouts/Layout.hx",193,0xbf1b15fc)
HX_LOCAL_STACK_FRAME(_hx_pos_6d6d54713e6bb77b_196_repositionChildren,"haxe.ui.layouts.Layout","repositionChildren",0x0fb6d868,"haxe.ui.layouts.Layout.repositionChildren","haxe/ui/layouts/Layout.hx",196,0xbf1b15fc)
HX_LOCAL_STACK_FRAME(_hx_pos_6d6d54713e6bb77b_200_get_usableSize,"haxe.ui.layouts.Layout","get_usableSize",0x70fac94f,"haxe.ui.layouts.Layout.get_usableSize","haxe/ui/layouts/Layout.hx",200,0xbf1b15fc)
HX_LOCAL_STACK_FRAME(_hx_pos_6d6d54713e6bb77b_218_get_usableWidth,"haxe.ui.layouts.Layout","get_usableWidth",0xb7ff09b8,"haxe.ui.layouts.Layout.get_usableWidth","haxe/ui/layouts/Layout.hx",218,0xbf1b15fc)
HX_LOCAL_STACK_FRAME(_hx_pos_6d6d54713e6bb77b_223_get_usableHeight,"haxe.ui.layouts.Layout","get_usableHeight",0xfd78eff5,"haxe.ui.layouts.Layout.get_usableHeight","haxe/ui/layouts/Layout.hx",223,0xbf1b15fc)
HX_LOCAL_STACK_FRAME(_hx_pos_6d6d54713e6bb77b_227_calcAutoWidth,"haxe.ui.layouts.Layout","calcAutoWidth",0x4bf4c835,"haxe.ui.layouts.Layout.calcAutoWidth","haxe/ui/layouts/Layout.hx",227,0xbf1b15fc)
HX_LOCAL_STACK_FRAME(_hx_pos_6d6d54713e6bb77b_231_calcAutoHeight,"haxe.ui.layouts.Layout","calcAutoHeight",0xe089ded8,"haxe.ui.layouts.Layout.calcAutoHeight","haxe/ui/layouts/Layout.hx",231,0xbf1b15fc)
HX_LOCAL_STACK_FRAME(_hx_pos_6d6d54713e6bb77b_234_calcAutoSize,"haxe.ui.layouts.Layout","calcAutoSize",0xa7992972,"haxe.ui.layouts.Layout.calcAutoSize","haxe/ui/layouts/Layout.hx",234,0xbf1b15fc)
HX_LOCAL_STACK_FRAME(_hx_pos_6d6d54713e6bb77b_275_excluded,"haxe.ui.layouts.Layout","excluded",0xe4e62db7,"haxe.ui.layouts.Layout.excluded","haxe/ui/layouts/Layout.hx",275,0xbf1b15fc)
namespace haxe{
namespace ui{
namespace layouts{

void Layout_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_6d6d54713e6bb77b_7_new)
            	}

Dynamic Layout_obj::__CreateEmpty() { return new Layout_obj; }

void *Layout_obj::_hx_vtable = 0;

Dynamic Layout_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Layout_obj > _hx_result = new Layout_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Layout_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x548a03f5;
}

static ::haxe::ui::layouts::ILayout_obj _hx_haxe_ui_layouts_Layout__hx_haxe_ui_layouts_ILayout= {
};

void *Layout_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xcbfa36e4: return &_hx_haxe_ui_layouts_Layout__hx_haxe_ui_layouts_ILayout;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

 ::haxe::ui::core::Component Layout_obj::get_component(){
            	HX_STACKFRAME(&_hx_pos_6d6d54713e6bb77b_14_get_component)
HXDLIN(  14)		return this->_component;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Layout_obj,get_component,return )

 ::haxe::ui::core::Component Layout_obj::set_component( ::haxe::ui::core::Component value){
            	HX_STACKFRAME(&_hx_pos_6d6d54713e6bb77b_16_set_component)
HXLINE(  17)		this->_component = value;
HXLINE(  18)		if (hx::IsNotNull( this->_component )) {
HXLINE(  19)			 ::haxe::ui::core::Component _this = this->_component;
HXDLIN(  19)			bool _hx_tmp;
HXDLIN(  19)			if (hx::IsNotNull( _this->_layout )) {
HXLINE(  19)				_hx_tmp = (_this->_layoutLocked == true);
            			}
            			else {
HXLINE(  19)				_hx_tmp = true;
            			}
HXDLIN(  19)			if (!(_hx_tmp)) {
HXLINE(  19)				_this->invalidate(HX_("layout",aa,ae,b8,58));
            			}
            		}
HXLINE(  21)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Layout_obj,set_component,return )

void Layout_obj::refresh(){
            	HX_STACKFRAME(&_hx_pos_6d6d54713e6bb77b_26_refresh)
HXDLIN(  26)		bool _hx_tmp;
HXDLIN(  26)		if (hx::IsNotNull( this->_component )) {
HXDLIN(  26)			_hx_tmp = (this->_component->get_isReady() == true);
            		}
            		else {
HXDLIN(  26)			_hx_tmp = false;
            		}
HXDLIN(  26)		if (_hx_tmp) {
HXLINE(  28)			this->resizeChildren();
HXLINE(  30)			this->_component->handlePreReposition();
HXLINE(  31)			this->repositionChildren();
HXLINE(  32)			this->_component->handlePostReposition();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Layout_obj,refresh,(void))

bool Layout_obj::autoSize(){
            	HX_STACKFRAME(&_hx_pos_6d6d54713e6bb77b_36_autoSize)
HXLINE(  37)		if ((this->get_component()->get_isReady() == false)) {
HXLINE(  38)			return false;
            		}
HXLINE(  41)		 ::Dynamic calculatedWidth = null();
HXLINE(  42)		 ::Dynamic calculatedHeight = null();
HXLINE(  43)		bool _hx_tmp;
HXDLIN(  43)		if ((this->get_component()->get_autoWidth() != true)) {
HXLINE(  43)			_hx_tmp = (this->get_component()->get_autoHeight() == true);
            		}
            		else {
HXLINE(  43)			_hx_tmp = true;
            		}
HXDLIN(  43)		if (_hx_tmp) {
HXLINE(  44)			 ::haxe::ui::util::Size size = this->calcAutoSize(null());
HXLINE(  45)			if ((this->get_component()->get_autoWidth() == true)) {
HXLINE(  46)				calculatedWidth = size->width;
            			}
HXLINE(  48)			if ((this->get_component()->get_autoHeight() == true)) {
HXLINE(  49)				calculatedHeight = size->height;
            			}
HXLINE(  51)			this->get_component()->resizeComponent(calculatedWidth,calculatedHeight);
            		}
HXLINE(  54)		if (hx::IsNull( calculatedWidth )) {
HXLINE(  54)			return hx::IsNotNull( calculatedHeight );
            		}
            		else {
HXLINE(  54)			return true;
            		}
HXDLIN(  54)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Layout_obj,autoSize,return )

Float Layout_obj::marginTop( ::haxe::ui::core::Component child){
            	HX_STACKFRAME(&_hx_pos_6d6d54713e6bb77b_60_marginTop)
HXLINE(  61)		bool _hx_tmp;
HXDLIN(  61)		bool _hx_tmp1;
HXDLIN(  61)		if (hx::IsNotNull( child )) {
HXLINE(  61)			_hx_tmp1 = hx::IsNull( child->get_style() );
            		}
            		else {
HXLINE(  61)			_hx_tmp1 = true;
            		}
HXDLIN(  61)		if (!(_hx_tmp1)) {
HXLINE(  61)			_hx_tmp = hx::IsNull( child->get_style()->marginTop );
            		}
            		else {
HXLINE(  61)			_hx_tmp = true;
            		}
HXDLIN(  61)		if (_hx_tmp) {
HXLINE(  62)			return (int)0;
            		}
HXLINE(  64)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toInt(child->get_style()->marginTop);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Layout_obj,marginTop,return )

Float Layout_obj::marginLeft( ::haxe::ui::core::Component child){
            	HX_STACKFRAME(&_hx_pos_6d6d54713e6bb77b_67_marginLeft)
HXLINE(  68)		bool _hx_tmp;
HXDLIN(  68)		bool _hx_tmp1;
HXDLIN(  68)		if (hx::IsNotNull( child )) {
HXLINE(  68)			_hx_tmp1 = hx::IsNull( child->get_style() );
            		}
            		else {
HXLINE(  68)			_hx_tmp1 = true;
            		}
HXDLIN(  68)		if (!(_hx_tmp1)) {
HXLINE(  68)			_hx_tmp = hx::IsNull( child->get_style()->marginLeft );
            		}
            		else {
HXLINE(  68)			_hx_tmp = true;
            		}
HXDLIN(  68)		if (_hx_tmp) {
HXLINE(  69)			return (int)0;
            		}
HXLINE(  72)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toInt(child->get_style()->marginLeft);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Layout_obj,marginLeft,return )

Float Layout_obj::marginBottom( ::haxe::ui::core::Component child){
            	HX_STACKFRAME(&_hx_pos_6d6d54713e6bb77b_75_marginBottom)
HXLINE(  76)		bool _hx_tmp;
HXDLIN(  76)		bool _hx_tmp1;
HXDLIN(  76)		if (hx::IsNotNull( child )) {
HXLINE(  76)			_hx_tmp1 = hx::IsNull( child->get_style() );
            		}
            		else {
HXLINE(  76)			_hx_tmp1 = true;
            		}
HXDLIN(  76)		if (!(_hx_tmp1)) {
HXLINE(  76)			_hx_tmp = hx::IsNull( child->get_style()->marginBottom );
            		}
            		else {
HXLINE(  76)			_hx_tmp = true;
            		}
HXDLIN(  76)		if (_hx_tmp) {
HXLINE(  77)			return (int)0;
            		}
HXLINE(  80)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toInt(child->get_style()->marginBottom);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Layout_obj,marginBottom,return )

Float Layout_obj::marginRight( ::haxe::ui::core::Component child){
            	HX_STACKFRAME(&_hx_pos_6d6d54713e6bb77b_83_marginRight)
HXLINE(  84)		bool _hx_tmp;
HXDLIN(  84)		bool _hx_tmp1;
HXDLIN(  84)		if (hx::IsNotNull( child )) {
HXLINE(  84)			_hx_tmp1 = hx::IsNull( child->get_style() );
            		}
            		else {
HXLINE(  84)			_hx_tmp1 = true;
            		}
HXDLIN(  84)		if (!(_hx_tmp1)) {
HXLINE(  84)			_hx_tmp = hx::IsNull( child->get_style()->marginRight );
            		}
            		else {
HXLINE(  84)			_hx_tmp = true;
            		}
HXDLIN(  84)		if (_hx_tmp) {
HXLINE(  85)			return (int)0;
            		}
HXLINE(  88)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toInt(child->get_style()->marginRight);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Layout_obj,marginRight,return )

bool Layout_obj::hidden( ::haxe::ui::core::Component c){
            	HX_STACKFRAME(&_hx_pos_6d6d54713e6bb77b_91_hidden)
HXLINE(  92)		if (hx::IsNull( c )) {
HXLINE(  93)			c = this->get_component();
            		}
HXLINE(  95)		return c->get_hidden();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Layout_obj,hidden,return )

::String Layout_obj::horizontalAlign( ::haxe::ui::core::Component child){
            	HX_STACKFRAME(&_hx_pos_6d6d54713e6bb77b_98_horizontalAlign)
HXLINE(  99)		bool _hx_tmp;
HXDLIN(  99)		bool _hx_tmp1;
HXDLIN(  99)		if (hx::IsNotNull( child )) {
HXLINE(  99)			_hx_tmp1 = hx::IsNull( child->get_style() );
            		}
            		else {
HXLINE(  99)			_hx_tmp1 = true;
            		}
HXDLIN(  99)		if (!(_hx_tmp1)) {
HXLINE(  99)			_hx_tmp = hx::IsNull( child->get_style()->horizontalAlign );
            		}
            		else {
HXLINE(  99)			_hx_tmp = true;
            		}
HXDLIN(  99)		if (_hx_tmp) {
HXLINE( 100)			return HX_("left",07,08,b0,47);
            		}
HXLINE( 102)		return child->get_style()->horizontalAlign;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Layout_obj,horizontalAlign,return )

::String Layout_obj::verticalAlign( ::haxe::ui::core::Component child){
            	HX_STACKFRAME(&_hx_pos_6d6d54713e6bb77b_105_verticalAlign)
HXLINE( 106)		bool _hx_tmp;
HXDLIN( 106)		bool _hx_tmp1;
HXDLIN( 106)		if (hx::IsNotNull( child )) {
HXLINE( 106)			_hx_tmp1 = hx::IsNull( child->get_style() );
            		}
            		else {
HXLINE( 106)			_hx_tmp1 = true;
            		}
HXDLIN( 106)		if (!(_hx_tmp1)) {
HXLINE( 106)			_hx_tmp = hx::IsNull( child->get_style()->verticalAlign );
            		}
            		else {
HXLINE( 106)			_hx_tmp = true;
            		}
HXDLIN( 106)		if (_hx_tmp) {
HXLINE( 107)			return HX_("top",95,66,58,00);
            		}
HXLINE( 109)		return child->get_style()->verticalAlign;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Layout_obj,verticalAlign,return )

Float Layout_obj::get_paddingLeft(){
            	HX_STACKFRAME(&_hx_pos_6d6d54713e6bb77b_116_get_paddingLeft)
HXLINE( 117)		bool _hx_tmp;
HXDLIN( 117)		bool _hx_tmp1;
HXDLIN( 117)		if (hx::IsNotNull( this->_component )) {
HXLINE( 117)			_hx_tmp1 = hx::IsNull( this->_component->get_style() );
            		}
            		else {
HXLINE( 117)			_hx_tmp1 = true;
            		}
HXDLIN( 117)		if (!(_hx_tmp1)) {
HXLINE( 117)			_hx_tmp = hx::IsNull( this->_component->get_style()->paddingLeft );
            		}
            		else {
HXLINE( 117)			_hx_tmp = true;
            		}
HXDLIN( 117)		if (_hx_tmp) {
HXLINE( 118)			return (int)0;
            		}
HXLINE( 120)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toInt(this->_component->get_style()->paddingLeft);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Layout_obj,get_paddingLeft,return )

Float Layout_obj::get_paddingTop(){
            	HX_STACKFRAME(&_hx_pos_6d6d54713e6bb77b_124_get_paddingTop)
HXLINE( 125)		bool _hx_tmp;
HXDLIN( 125)		bool _hx_tmp1;
HXDLIN( 125)		if (hx::IsNotNull( this->_component )) {
HXLINE( 125)			_hx_tmp1 = hx::IsNull( this->_component->get_style() );
            		}
            		else {
HXLINE( 125)			_hx_tmp1 = true;
            		}
HXDLIN( 125)		if (!(_hx_tmp1)) {
HXLINE( 125)			_hx_tmp = hx::IsNull( this->_component->get_style()->paddingTop );
            		}
            		else {
HXLINE( 125)			_hx_tmp = true;
            		}
HXDLIN( 125)		if (_hx_tmp) {
HXLINE( 126)			return (int)0;
            		}
HXLINE( 128)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toInt(this->_component->get_style()->paddingTop);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Layout_obj,get_paddingTop,return )

Float Layout_obj::get_paddingBottom(){
            	HX_STACKFRAME(&_hx_pos_6d6d54713e6bb77b_132_get_paddingBottom)
HXLINE( 133)		bool _hx_tmp;
HXDLIN( 133)		bool _hx_tmp1;
HXDLIN( 133)		if (hx::IsNotNull( this->_component )) {
HXLINE( 133)			_hx_tmp1 = hx::IsNull( this->_component->get_style() );
            		}
            		else {
HXLINE( 133)			_hx_tmp1 = true;
            		}
HXDLIN( 133)		if (!(_hx_tmp1)) {
HXLINE( 133)			_hx_tmp = hx::IsNull( this->_component->get_style()->paddingBottom );
            		}
            		else {
HXLINE( 133)			_hx_tmp = true;
            		}
HXDLIN( 133)		if (_hx_tmp) {
HXLINE( 134)			return (int)0;
            		}
HXLINE( 136)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toInt(this->_component->get_style()->paddingBottom);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Layout_obj,get_paddingBottom,return )

Float Layout_obj::get_paddingRight(){
            	HX_STACKFRAME(&_hx_pos_6d6d54713e6bb77b_140_get_paddingRight)
HXLINE( 141)		bool _hx_tmp;
HXDLIN( 141)		bool _hx_tmp1;
HXDLIN( 141)		if (hx::IsNotNull( this->_component )) {
HXLINE( 141)			_hx_tmp1 = hx::IsNull( this->_component->get_style() );
            		}
            		else {
HXLINE( 141)			_hx_tmp1 = true;
            		}
HXDLIN( 141)		if (!(_hx_tmp1)) {
HXLINE( 141)			_hx_tmp = hx::IsNull( this->_component->get_style()->paddingRight );
            		}
            		else {
HXLINE( 141)			_hx_tmp = true;
            		}
HXDLIN( 141)		if (_hx_tmp) {
HXLINE( 142)			return (int)0;
            		}
HXLINE( 144)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toInt(this->_component->get_style()->paddingRight);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Layout_obj,get_paddingRight,return )

Float Layout_obj::get_horizontalSpacing(){
            	HX_STACKFRAME(&_hx_pos_6d6d54713e6bb77b_148_get_horizontalSpacing)
HXLINE( 149)		bool _hx_tmp;
HXDLIN( 149)		bool _hx_tmp1;
HXDLIN( 149)		if (hx::IsNotNull( this->_component )) {
HXLINE( 149)			_hx_tmp1 = hx::IsNull( this->_component->get_style() );
            		}
            		else {
HXLINE( 149)			_hx_tmp1 = true;
            		}
HXDLIN( 149)		if (!(_hx_tmp1)) {
HXLINE( 149)			_hx_tmp = hx::IsNull( this->_component->get_style()->horizontalSpacing );
            		}
            		else {
HXLINE( 149)			_hx_tmp = true;
            		}
HXDLIN( 149)		if (_hx_tmp) {
HXLINE( 150)			return (int)0;
            		}
HXLINE( 152)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toInt(this->_component->get_style()->horizontalSpacing);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Layout_obj,get_horizontalSpacing,return )

Float Layout_obj::get_verticalSpacing(){
            	HX_STACKFRAME(&_hx_pos_6d6d54713e6bb77b_156_get_verticalSpacing)
HXLINE( 157)		bool _hx_tmp;
HXDLIN( 157)		bool _hx_tmp1;
HXDLIN( 157)		if (hx::IsNotNull( this->_component )) {
HXLINE( 157)			_hx_tmp1 = hx::IsNull( this->_component->get_style() );
            		}
            		else {
HXLINE( 157)			_hx_tmp1 = true;
            		}
HXDLIN( 157)		if (!(_hx_tmp1)) {
HXLINE( 157)			_hx_tmp = hx::IsNull( this->_component->get_style()->verticalSpacing );
            		}
            		else {
HXLINE( 157)			_hx_tmp = true;
            		}
HXDLIN( 157)		if (_hx_tmp) {
HXLINE( 158)			return (int)0;
            		}
HXLINE( 160)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toInt(this->_component->get_style()->verticalSpacing);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Layout_obj,get_verticalSpacing,return )

Float Layout_obj::get_innerWidth(){
            	HX_STACKFRAME(&_hx_pos_6d6d54713e6bb77b_170_get_innerWidth)
HXLINE( 171)		if (hx::IsNull( this->get_component() )) {
HXLINE( 172)			return (int)0;
            		}
HXLINE( 174)		 ::Dynamic _hx_tmp = this->get_component()->get_componentWidth();
HXDLIN( 174)		Float _hx_tmp1 = this->get_paddingLeft();
HXDLIN( 174)		return (_hx_tmp - (_hx_tmp1 + this->get_paddingRight()));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Layout_obj,get_innerWidth,return )

Float Layout_obj::get_innerHeight(){
            	HX_STACKFRAME(&_hx_pos_6d6d54713e6bb77b_178_get_innerHeight)
HXLINE( 179)		if (hx::IsNull( this->get_component() )) {
HXLINE( 180)			return (int)0;
            		}
HXLINE( 182)		Float padding = (int)0;
HXLINE( 183)		if (hx::IsNotNull( this->get_component()->get_style()->paddingTop )) {
HXLINE( 184)			 ::haxe::ui::util::VariantType padding1 = this->get_component()->get_style()->paddingTop;
HXDLIN( 184)			padding = ::haxe::ui::util::_Variant::Variant_Impl__obj::toInt(::haxe::ui::util::_Variant::Variant_Impl__obj::add(padding1,::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(padding)));
            		}
HXLINE( 186)		if (hx::IsNotNull( this->get_component()->get_style()->paddingBottom )) {
HXLINE( 187)			 ::haxe::ui::util::VariantType padding2 = this->get_component()->get_style()->paddingBottom;
HXDLIN( 187)			padding = ::haxe::ui::util::_Variant::Variant_Impl__obj::toInt(::haxe::ui::util::_Variant::Variant_Impl__obj::add(padding2,::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(padding)));
            		}
HXLINE( 189)		Float icy = (this->get_component()->get_componentHeight() - padding);
HXLINE( 190)		return icy;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Layout_obj,get_innerHeight,return )

void Layout_obj::resizeChildren(){
            	HX_STACKFRAME(&_hx_pos_6d6d54713e6bb77b_193_resizeChildren)
            	}


HX_DEFINE_DYNAMIC_FUNC0(Layout_obj,resizeChildren,(void))

void Layout_obj::repositionChildren(){
            	HX_STACKFRAME(&_hx_pos_6d6d54713e6bb77b_196_repositionChildren)
            	}


HX_DEFINE_DYNAMIC_FUNC0(Layout_obj,repositionChildren,(void))

 ::haxe::ui::util::Size Layout_obj::get_usableSize(){
            	HX_GC_STACKFRAME(&_hx_pos_6d6d54713e6bb77b_200_get_usableSize)
HXLINE( 201)		Float ucx = (int)0;
HXLINE( 202)		if (hx::IsNotNull( this->_component->get_componentWidth() )) {
HXLINE( 203)			ucx = this->_component->get_componentWidth();
HXLINE( 204)			Float ucx1 = this->get_paddingLeft();
HXDLIN( 204)			ucx = (ucx - (ucx1 + this->get_paddingRight()));
            		}
HXLINE( 207)		Float ucy = (int)0;
HXLINE( 208)		if (hx::IsNotNull( this->_component->get_componentHeight() )) {
HXLINE( 209)			ucy = this->_component->get_componentHeight();
HXLINE( 210)			Float ucy1 = this->get_paddingTop();
HXDLIN( 210)			ucy = (ucy - (ucy1 + this->get_paddingBottom()));
            		}
HXLINE( 213)		return  ::haxe::ui::util::Size_obj::__alloc( HX_CTX ,ucx,ucy);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Layout_obj,get_usableSize,return )

Float Layout_obj::get_usableWidth(){
            	HX_STACKFRAME(&_hx_pos_6d6d54713e6bb77b_218_get_usableWidth)
HXDLIN( 218)		return this->get_usableSize()->width;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Layout_obj,get_usableWidth,return )

Float Layout_obj::get_usableHeight(){
            	HX_STACKFRAME(&_hx_pos_6d6d54713e6bb77b_223_get_usableHeight)
HXDLIN( 223)		return this->get_usableSize()->height;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Layout_obj,get_usableHeight,return )

Float Layout_obj::calcAutoWidth(){
            	HX_STACKFRAME(&_hx_pos_6d6d54713e6bb77b_227_calcAutoWidth)
HXDLIN( 227)		return this->calcAutoSize(null())->width;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Layout_obj,calcAutoWidth,return )

Float Layout_obj::calcAutoHeight(){
            	HX_STACKFRAME(&_hx_pos_6d6d54713e6bb77b_231_calcAutoHeight)
HXDLIN( 231)		return this->calcAutoSize(null())->height;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Layout_obj,calcAutoHeight,return )

 ::haxe::ui::util::Size Layout_obj::calcAutoSize(::Array< ::Dynamic> exclusions){
            	HX_GC_STACKFRAME(&_hx_pos_6d6d54713e6bb77b_234_calcAutoSize)
HXLINE( 235)		Float x1 = (int)16777215;
HXLINE( 236)		Float x2 = (int)0;
HXLINE( 237)		Float y1 = (int)16777215;
HXLINE( 238)		Float y2 = (int)0;
HXLINE( 239)		{
HXLINE( 239)			int _g = (int)0;
HXDLIN( 239)			::Array< ::Dynamic> _g1 = this->get_component()->get_childComponents();
HXDLIN( 239)			while((_g < _g1->length)){
HXLINE( 239)				 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 239)				_g = (_g + (int)1);
HXLINE( 240)				bool _hx_tmp;
HXDLIN( 240)				if ((child->get_includeInLayout() != false)) {
HXLINE( 240)					_hx_tmp = (this->excluded(exclusions,child) == true);
            				}
            				else {
HXLINE( 240)					_hx_tmp = true;
            				}
HXDLIN( 240)				if (_hx_tmp) {
HXLINE( 241)					continue;
            				}
HXLINE( 244)				if (hx::IsNull( child->get_percentWidth() )) {
HXLINE( 245)					if (hx::IsLess( child->get_left(),x1 )) {
HXLINE( 246)						x1 = child->get_left();
            					}
HXLINE( 248)					bool _hx_tmp1;
HXDLIN( 248)					if (hx::IsNotNull( child->get_componentWidth() )) {
HXLINE( 248)						 ::Dynamic _hx_tmp2 = child->get_left();
HXDLIN( 248)						_hx_tmp1 = ((_hx_tmp2 + child->get_componentWidth()) > x2);
            					}
            					else {
HXLINE( 248)						_hx_tmp1 = false;
            					}
HXDLIN( 248)					if (_hx_tmp1) {
HXLINE( 249)						 ::Dynamic x21 = child->get_left();
HXDLIN( 249)						x2 = (x21 + child->get_componentWidth());
            					}
            				}
HXLINE( 253)				if (hx::IsNull( child->get_percentHeight() )) {
HXLINE( 254)					if (hx::IsLess( child->get_top(),y1 )) {
HXLINE( 255)						y1 = child->get_top();
            					}
HXLINE( 257)					bool _hx_tmp3;
HXDLIN( 257)					if (hx::IsNotNull( child->get_componentHeight() )) {
HXLINE( 257)						 ::Dynamic _hx_tmp4 = child->get_top();
HXDLIN( 257)						_hx_tmp3 = ((_hx_tmp4 + child->get_componentHeight()) > y2);
            					}
            					else {
HXLINE( 257)						_hx_tmp3 = false;
            					}
HXDLIN( 257)					if (_hx_tmp3) {
HXLINE( 258)						 ::Dynamic y21 = child->get_top();
HXDLIN( 258)						y2 = (y21 + child->get_componentHeight());
            					}
            				}
            			}
            		}
HXLINE( 263)		if ((x1 == (int)16777215)) {
HXLINE( 264)			x1 = (int)0;
            		}
HXLINE( 266)		if ((y1 == (int)16777215)) {
HXLINE( 267)			y1 = (int)0;
            		}
HXLINE( 270)		Float w = this->get_paddingLeft();
HXDLIN( 270)		Float w1 = ((x2 - x1) + (w + this->get_paddingRight()));
HXLINE( 271)		Float h = this->get_paddingTop();
HXDLIN( 271)		Float h1 = ((y2 - y1) + (h + this->get_paddingBottom()));
HXLINE( 272)		return  ::haxe::ui::util::Size_obj::__alloc( HX_CTX ,w1,h1);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Layout_obj,calcAutoSize,return )

bool Layout_obj::excluded(::Array< ::Dynamic> exclusions, ::haxe::ui::core::Component child){
            	HX_STACKFRAME(&_hx_pos_6d6d54713e6bb77b_275_excluded)
HXLINE( 276)		if (hx::IsNull( exclusions )) {
HXLINE( 277)			return false;
            		}
HXLINE( 279)		return (exclusions->indexOf(child,null()) != (int)-1);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Layout_obj,excluded,return )


hx::ObjectPtr< Layout_obj > Layout_obj::__new() {
	hx::ObjectPtr< Layout_obj > __this = new Layout_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< Layout_obj > Layout_obj::__alloc(hx::Ctx *_hx_ctx) {
	Layout_obj *__this = (Layout_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Layout_obj), true, "haxe.ui.layouts.Layout"));
	*(void **)__this = Layout_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Layout_obj::Layout_obj()
{
}

void Layout_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Layout);
	HX_MARK_MEMBER_NAME(_component,"_component");
	HX_MARK_MEMBER_NAME(paddingLeft,"paddingLeft");
	HX_MARK_MEMBER_NAME(paddingTop,"paddingTop");
	HX_MARK_MEMBER_NAME(paddingBottom,"paddingBottom");
	HX_MARK_MEMBER_NAME(paddingRight,"paddingRight");
	HX_MARK_MEMBER_NAME(horizontalSpacing,"horizontalSpacing");
	HX_MARK_MEMBER_NAME(verticalSpacing,"verticalSpacing");
	HX_MARK_MEMBER_NAME(innerWidth,"innerWidth");
	HX_MARK_MEMBER_NAME(innerHeight,"innerHeight");
	HX_MARK_MEMBER_NAME(usableSize,"usableSize");
	HX_MARK_MEMBER_NAME(usableWidth,"usableWidth");
	HX_MARK_MEMBER_NAME(usableHeight,"usableHeight");
	HX_MARK_END_CLASS();
}

void Layout_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_component,"_component");
	HX_VISIT_MEMBER_NAME(paddingLeft,"paddingLeft");
	HX_VISIT_MEMBER_NAME(paddingTop,"paddingTop");
	HX_VISIT_MEMBER_NAME(paddingBottom,"paddingBottom");
	HX_VISIT_MEMBER_NAME(paddingRight,"paddingRight");
	HX_VISIT_MEMBER_NAME(horizontalSpacing,"horizontalSpacing");
	HX_VISIT_MEMBER_NAME(verticalSpacing,"verticalSpacing");
	HX_VISIT_MEMBER_NAME(innerWidth,"innerWidth");
	HX_VISIT_MEMBER_NAME(innerHeight,"innerHeight");
	HX_VISIT_MEMBER_NAME(usableSize,"usableSize");
	HX_VISIT_MEMBER_NAME(usableWidth,"usableWidth");
	HX_VISIT_MEMBER_NAME(usableHeight,"usableHeight");
}

hx::Val Layout_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"hidden") ) { return hx::Val( hidden_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"refresh") ) { return hx::Val( refresh_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"autoSize") ) { return hx::Val( autoSize_dyn() ); }
		if (HX_FIELD_EQ(inName,"excluded") ) { return hx::Val( excluded_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"component") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_component() ); }
		if (HX_FIELD_EQ(inName,"marginTop") ) { return hx::Val( marginTop_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_component") ) { return hx::Val( _component ); }
		if (HX_FIELD_EQ(inName,"marginLeft") ) { return hx::Val( marginLeft_dyn() ); }
		if (HX_FIELD_EQ(inName,"paddingTop") ) { return hx::Val( inCallProp == hx::paccAlways ? get_paddingTop() : paddingTop ); }
		if (HX_FIELD_EQ(inName,"innerWidth") ) { return hx::Val( inCallProp == hx::paccAlways ? get_innerWidth() : innerWidth ); }
		if (HX_FIELD_EQ(inName,"usableSize") ) { return hx::Val( inCallProp == hx::paccAlways ? get_usableSize() : usableSize ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"marginRight") ) { return hx::Val( marginRight_dyn() ); }
		if (HX_FIELD_EQ(inName,"paddingLeft") ) { return hx::Val( inCallProp == hx::paccAlways ? get_paddingLeft() : paddingLeft ); }
		if (HX_FIELD_EQ(inName,"innerHeight") ) { return hx::Val( inCallProp == hx::paccAlways ? get_innerHeight() : innerHeight ); }
		if (HX_FIELD_EQ(inName,"usableWidth") ) { return hx::Val( inCallProp == hx::paccAlways ? get_usableWidth() : usableWidth ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"marginBottom") ) { return hx::Val( marginBottom_dyn() ); }
		if (HX_FIELD_EQ(inName,"paddingRight") ) { return hx::Val( inCallProp == hx::paccAlways ? get_paddingRight() : paddingRight ); }
		if (HX_FIELD_EQ(inName,"usableHeight") ) { return hx::Val( inCallProp == hx::paccAlways ? get_usableHeight() : usableHeight ); }
		if (HX_FIELD_EQ(inName,"calcAutoSize") ) { return hx::Val( calcAutoSize_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_component") ) { return hx::Val( get_component_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_component") ) { return hx::Val( set_component_dyn() ); }
		if (HX_FIELD_EQ(inName,"verticalAlign") ) { return hx::Val( verticalAlign_dyn() ); }
		if (HX_FIELD_EQ(inName,"paddingBottom") ) { return hx::Val( inCallProp == hx::paccAlways ? get_paddingBottom() : paddingBottom ); }
		if (HX_FIELD_EQ(inName,"calcAutoWidth") ) { return hx::Val( calcAutoWidth_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_paddingTop") ) { return hx::Val( get_paddingTop_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_innerWidth") ) { return hx::Val( get_innerWidth_dyn() ); }
		if (HX_FIELD_EQ(inName,"resizeChildren") ) { return hx::Val( resizeChildren_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_usableSize") ) { return hx::Val( get_usableSize_dyn() ); }
		if (HX_FIELD_EQ(inName,"calcAutoHeight") ) { return hx::Val( calcAutoHeight_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"horizontalAlign") ) { return hx::Val( horizontalAlign_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_paddingLeft") ) { return hx::Val( get_paddingLeft_dyn() ); }
		if (HX_FIELD_EQ(inName,"verticalSpacing") ) { return hx::Val( inCallProp == hx::paccAlways ? get_verticalSpacing() : verticalSpacing ); }
		if (HX_FIELD_EQ(inName,"get_innerHeight") ) { return hx::Val( get_innerHeight_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_usableWidth") ) { return hx::Val( get_usableWidth_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_paddingRight") ) { return hx::Val( get_paddingRight_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_usableHeight") ) { return hx::Val( get_usableHeight_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_paddingBottom") ) { return hx::Val( get_paddingBottom_dyn() ); }
		if (HX_FIELD_EQ(inName,"horizontalSpacing") ) { return hx::Val( inCallProp == hx::paccAlways ? get_horizontalSpacing() : horizontalSpacing ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"repositionChildren") ) { return hx::Val( repositionChildren_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"get_verticalSpacing") ) { return hx::Val( get_verticalSpacing_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"get_horizontalSpacing") ) { return hx::Val( get_horizontalSpacing_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Layout_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"component") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_component(inValue.Cast<  ::haxe::ui::core::Component >()) ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_component") ) { _component=inValue.Cast<  ::haxe::ui::core::Component >(); return inValue; }
		if (HX_FIELD_EQ(inName,"paddingTop") ) { paddingTop=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"innerWidth") ) { innerWidth=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"usableSize") ) { usableSize=inValue.Cast<  ::haxe::ui::util::Size >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"paddingLeft") ) { paddingLeft=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"innerHeight") ) { innerHeight=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"usableWidth") ) { usableWidth=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"paddingRight") ) { paddingRight=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"usableHeight") ) { usableHeight=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"paddingBottom") ) { paddingBottom=inValue.Cast< Float >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"verticalSpacing") ) { verticalSpacing=inValue.Cast< Float >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"horizontalSpacing") ) { horizontalSpacing=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Layout_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_component","\x7e","\x6c","\xf6","\x6a"));
	outFields->push(HX_HCSTRING("component","\xbd","\xf0","\x53","\x0f"));
	outFields->push(HX_HCSTRING("paddingLeft","\x78","\x4a","\xe6","\x85"));
	outFields->push(HX_HCSTRING("paddingTop","\x44","\xfd","\x05","\x3a"));
	outFields->push(HX_HCSTRING("paddingBottom","\x9c","\x67","\x99","\x4f"));
	outFields->push(HX_HCSTRING("paddingRight","\x4b","\xec","\xa7","\x1a"));
	outFields->push(HX_HCSTRING("horizontalSpacing","\xff","\x82","\xed","\x70"));
	outFields->push(HX_HCSTRING("verticalSpacing","\xad","\xb9","\xa6","\xfa"));
	outFields->push(HX_HCSTRING("innerWidth","\x90","\x74","\x2a","\x70"));
	outFields->push(HX_HCSTRING("innerHeight","\x1d","\x02","\x4b","\x6b"));
	outFields->push(HX_HCSTRING("usableSize","\xd9","\x03","\x00","\xc9"));
	outFields->push(HX_HCSTRING("usableWidth","\xee","\x07","\x8d","\x64"));
	outFields->push(HX_HCSTRING("usableHeight","\xff","\x60","\x29","\x4d"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Layout_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ui::core::Component*/ ,(int)offsetof(Layout_obj,_component),HX_HCSTRING("_component","\x7e","\x6c","\xf6","\x6a")},
	{hx::fsFloat,(int)offsetof(Layout_obj,paddingLeft),HX_HCSTRING("paddingLeft","\x78","\x4a","\xe6","\x85")},
	{hx::fsFloat,(int)offsetof(Layout_obj,paddingTop),HX_HCSTRING("paddingTop","\x44","\xfd","\x05","\x3a")},
	{hx::fsFloat,(int)offsetof(Layout_obj,paddingBottom),HX_HCSTRING("paddingBottom","\x9c","\x67","\x99","\x4f")},
	{hx::fsFloat,(int)offsetof(Layout_obj,paddingRight),HX_HCSTRING("paddingRight","\x4b","\xec","\xa7","\x1a")},
	{hx::fsFloat,(int)offsetof(Layout_obj,horizontalSpacing),HX_HCSTRING("horizontalSpacing","\xff","\x82","\xed","\x70")},
	{hx::fsFloat,(int)offsetof(Layout_obj,verticalSpacing),HX_HCSTRING("verticalSpacing","\xad","\xb9","\xa6","\xfa")},
	{hx::fsFloat,(int)offsetof(Layout_obj,innerWidth),HX_HCSTRING("innerWidth","\x90","\x74","\x2a","\x70")},
	{hx::fsFloat,(int)offsetof(Layout_obj,innerHeight),HX_HCSTRING("innerHeight","\x1d","\x02","\x4b","\x6b")},
	{hx::fsObject /*::haxe::ui::util::Size*/ ,(int)offsetof(Layout_obj,usableSize),HX_HCSTRING("usableSize","\xd9","\x03","\x00","\xc9")},
	{hx::fsFloat,(int)offsetof(Layout_obj,usableWidth),HX_HCSTRING("usableWidth","\xee","\x07","\x8d","\x64")},
	{hx::fsFloat,(int)offsetof(Layout_obj,usableHeight),HX_HCSTRING("usableHeight","\xff","\x60","\x29","\x4d")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Layout_obj_sStaticStorageInfo = 0;
#endif

static ::String Layout_obj_sMemberFields[] = {
	HX_HCSTRING("_component","\x7e","\x6c","\xf6","\x6a"),
	HX_HCSTRING("get_component","\x94","\xc4","\xb7","\xd0"),
	HX_HCSTRING("set_component","\xa0","\xa6","\xbd","\x15"),
	HX_HCSTRING("refresh","\xdb","\xd9","\x20","\xed"),
	HX_HCSTRING("autoSize","\xd0","\x8f","\x79","\x2f"),
	HX_HCSTRING("marginTop","\x07","\x7f","\x40","\xee"),
	HX_HCSTRING("marginLeft","\x55","\x53","\xdd","\x84"),
	HX_HCSTRING("marginBottom","\xb9","\x21","\x0a","\x41"),
	HX_HCSTRING("marginRight","\xce","\xa4","\xd8","\x33"),
	HX_HCSTRING("hidden","\x6a","\xff","\x95","\x4c"),
	HX_HCSTRING("horizontalAlign","\x41","\x8f","\x67","\xf4"),
	HX_HCSTRING("verticalAlign","\x6f","\x1e","\x7c","\xe4"),
	HX_HCSTRING("paddingLeft","\x78","\x4a","\xe6","\x85"),
	HX_HCSTRING("get_paddingLeft","\x0f","\x02","\xc8","\x46"),
	HX_HCSTRING("paddingTop","\x44","\xfd","\x05","\x3a"),
	HX_HCSTRING("get_paddingTop","\x8d","\x85","\xfb","\xaf"),
	HX_HCSTRING("paddingBottom","\x9c","\x67","\x99","\x4f"),
	HX_HCSTRING("get_paddingBottom","\xf3","\x72","\x09","\x56"),
	HX_HCSTRING("paddingRight","\x4b","\xec","\xa7","\x1a"),
	HX_HCSTRING("get_paddingRight","\xd4","\xd8","\x46","\x1f"),
	HX_HCSTRING("horizontalSpacing","\xff","\x82","\xed","\x70"),
	HX_HCSTRING("get_horizontalSpacing","\xd6","\x85","\x9b","\xef"),
	HX_HCSTRING("verticalSpacing","\xad","\xb9","\xa6","\xfa"),
	HX_HCSTRING("get_verticalSpacing","\xc4","\x88","\xb1","\x85"),
	HX_HCSTRING("innerWidth","\x90","\x74","\x2a","\x70"),
	HX_HCSTRING("innerHeight","\x1d","\x02","\x4b","\x6b"),
	HX_HCSTRING("get_innerWidth","\xd9","\xfc","\x1f","\xe6"),
	HX_HCSTRING("get_innerHeight","\xb4","\xb9","\x2c","\x2c"),
	HX_HCSTRING("resizeChildren","\x53","\x43","\x30","\xc1"),
	HX_HCSTRING("repositionChildren","\xbb","\x00","\xc7","\x9c"),
	HX_HCSTRING("usableSize","\xd9","\x03","\x00","\xc9"),
	HX_HCSTRING("get_usableSize","\x22","\x8c","\xf5","\x3e"),
	HX_HCSTRING("usableWidth","\xee","\x07","\x8d","\x64"),
	HX_HCSTRING("get_usableWidth","\x85","\xbf","\x6e","\x25"),
	HX_HCSTRING("usableHeight","\xff","\x60","\x29","\x4d"),
	HX_HCSTRING("get_usableHeight","\x88","\x4d","\xc8","\x51"),
	HX_HCSTRING("calcAutoWidth","\xc2","\x80","\xdb","\xe7"),
	HX_HCSTRING("calcAutoHeight","\xab","\xa1","\x84","\xae"),
	HX_HCSTRING("calcAutoSize","\x85","\x81","\x3f","\xfd"),
	HX_HCSTRING("excluded","\x4a","\x40","\x34","\x21"),
	::String(null()) };

static void Layout_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Layout_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Layout_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Layout_obj::__mClass,"__mClass");
};

#endif

hx::Class Layout_obj::__mClass;

void Layout_obj::__register()
{
	hx::Object *dummy = new Layout_obj;
	Layout_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.layouts.Layout","\xa1","\xd4","\xa9","\xe0");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Layout_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Layout_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Layout_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Layout_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Layout_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Layout_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace layouts
