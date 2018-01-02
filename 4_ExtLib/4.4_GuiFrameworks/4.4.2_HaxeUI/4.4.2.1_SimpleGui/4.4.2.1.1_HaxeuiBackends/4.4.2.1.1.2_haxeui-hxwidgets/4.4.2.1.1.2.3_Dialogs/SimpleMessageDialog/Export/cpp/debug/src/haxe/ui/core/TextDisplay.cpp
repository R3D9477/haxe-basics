// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_ui_ToolkitAssets
#include <haxe/ui/ToolkitAssets.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_AssetsBase
#include <haxe/ui/backend/AssetsBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_TextDisplayBase
#include <haxe/ui/backend/TextDisplayBase.h>
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
#ifndef INCLUDED_haxe_ui_core_TextDisplay
#include <haxe/ui/core/TextDisplay.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_Style
#include <haxe/ui/styles/Style.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_aba319191a839d6a_12_new,"haxe.ui.core.TextDisplay","new",0x0409736a,"haxe.ui.core.TextDisplay.new","haxe/ui/core/TextDisplay.hx",12,0xd6487467)
HX_LOCAL_STACK_FRAME(_hx_pos_aba319191a839d6a_27_get_textStyle,"haxe.ui.core.TextDisplay","get_textStyle",0x1d5e9ca5,"haxe.ui.core.TextDisplay.get_textStyle","haxe/ui/core/TextDisplay.hx",27,0xd6487467)
HX_LOCAL_STACK_FRAME(_hx_pos_aba319191a839d6a_30_set_textStyle,"haxe.ui.core.TextDisplay","set_textStyle",0x62647eb1,"haxe.ui.core.TextDisplay.set_textStyle","haxe/ui/core/TextDisplay.hx",30,0xd6487467)
HX_LOCAL_STACK_FRAME(_hx_pos_aba319191a839d6a_36_set_textStyle,"haxe.ui.core.TextDisplay","set_textStyle",0x62647eb1,"haxe.ui.core.TextDisplay.set_textStyle","haxe/ui/core/TextDisplay.hx",36,0xd6487467)
HX_LOCAL_STACK_FRAME(_hx_pos_aba319191a839d6a_51_get_text,"haxe.ui.core.TextDisplay","get_text",0x6441a0ec,"haxe.ui.core.TextDisplay.get_text","haxe/ui/core/TextDisplay.hx",51,0xd6487467)
HX_LOCAL_STACK_FRAME(_hx_pos_aba319191a839d6a_53_set_text,"haxe.ui.core.TextDisplay","set_text",0x129efa60,"haxe.ui.core.TextDisplay.set_text","haxe/ui/core/TextDisplay.hx",53,0xd6487467)
HX_LOCAL_STACK_FRAME(_hx_pos_aba319191a839d6a_65_get_left,"haxe.ui.core.TextDisplay","get_left",0x5ef7dc46,"haxe.ui.core.TextDisplay.get_left","haxe/ui/core/TextDisplay.hx",65,0xd6487467)
HX_LOCAL_STACK_FRAME(_hx_pos_aba319191a839d6a_67_set_left,"haxe.ui.core.TextDisplay","set_left",0x0d5535ba,"haxe.ui.core.TextDisplay.set_left","haxe/ui/core/TextDisplay.hx",67,0xd6487467)
HX_LOCAL_STACK_FRAME(_hx_pos_aba319191a839d6a_79_get_top,"haxe.ui.core.TextDisplay","get_top",0xbb921f36,"haxe.ui.core.TextDisplay.get_top","haxe/ui/core/TextDisplay.hx",79,0xd6487467)
HX_LOCAL_STACK_FRAME(_hx_pos_aba319191a839d6a_81_set_top,"haxe.ui.core.TextDisplay","set_top",0xae93b042,"haxe.ui.core.TextDisplay.set_top","haxe/ui/core/TextDisplay.hx",81,0xd6487467)
HX_LOCAL_STACK_FRAME(_hx_pos_aba319191a839d6a_92_set_width,"haxe.ui.core.TextDisplay","set_width",0xf54584f3,"haxe.ui.core.TextDisplay.set_width","haxe/ui/core/TextDisplay.hx",92,0xd6487467)
HX_LOCAL_STACK_FRAME(_hx_pos_aba319191a839d6a_103_get_width,"haxe.ui.core.TextDisplay","get_width",0x11f498e7,"haxe.ui.core.TextDisplay.get_width","haxe/ui/core/TextDisplay.hx",103,0xd6487467)
HX_LOCAL_STACK_FRAME(_hx_pos_aba319191a839d6a_107_set_height,"haxe.ui.core.TextDisplay","set_height",0x5dde485a,"haxe.ui.core.TextDisplay.set_height","haxe/ui/core/TextDisplay.hx",107,0xd6487467)
HX_LOCAL_STACK_FRAME(_hx_pos_aba319191a839d6a_118_get_height,"haxe.ui.core.TextDisplay","get_height",0x5a60a9e6,"haxe.ui.core.TextDisplay.get_height","haxe/ui/core/TextDisplay.hx",118,0xd6487467)
HX_LOCAL_STACK_FRAME(_hx_pos_aba319191a839d6a_122_get_textWidth,"haxe.ui.core.TextDisplay","get_textWidth",0x63a3ad7a,"haxe.ui.core.TextDisplay.get_textWidth","haxe/ui/core/TextDisplay.hx",122,0xd6487467)
HX_LOCAL_STACK_FRAME(_hx_pos_aba319191a839d6a_135_get_textHeight,"haxe.ui.core.TextDisplay","get_textHeight",0x81e395f3,"haxe.ui.core.TextDisplay.get_textHeight","haxe/ui/core/TextDisplay.hx",135,0xd6487467)
HX_LOCAL_STACK_FRAME(_hx_pos_aba319191a839d6a_149_get_multiline,"haxe.ui.core.TextDisplay","get_multiline",0x9e653a4e,"haxe.ui.core.TextDisplay.get_multiline","haxe/ui/core/TextDisplay.hx",149,0xd6487467)
HX_LOCAL_STACK_FRAME(_hx_pos_aba319191a839d6a_151_set_multiline,"haxe.ui.core.TextDisplay","set_multiline",0xe36b1c5a,"haxe.ui.core.TextDisplay.set_multiline","haxe/ui/core/TextDisplay.hx",151,0xd6487467)
HX_LOCAL_STACK_FRAME(_hx_pos_aba319191a839d6a_163_get_wordWrap,"haxe.ui.core.TextDisplay","get_wordWrap",0x00db7473,"haxe.ui.core.TextDisplay.get_wordWrap","haxe/ui/core/TextDisplay.hx",163,0xd6487467)
HX_LOCAL_STACK_FRAME(_hx_pos_aba319191a839d6a_165_set_wordWrap,"haxe.ui.core.TextDisplay","set_wordWrap",0x15d497e7,"haxe.ui.core.TextDisplay.set_wordWrap","haxe/ui/core/TextDisplay.hx",165,0xd6487467)
HX_LOCAL_STACK_FRAME(_hx_pos_aba319191a839d6a_175_isInvalid,"haxe.ui.core.TextDisplay","isInvalid",0x432edeb7,"haxe.ui.core.TextDisplay.isInvalid","haxe/ui/core/TextDisplay.hx",175,0xd6487467)
HX_LOCAL_STACK_FRAME(_hx_pos_aba319191a839d6a_192_invalidate,"haxe.ui.core.TextDisplay","invalidate",0xeeb74bb1,"haxe.ui.core.TextDisplay.invalidate","haxe/ui/core/TextDisplay.hx",192,0xd6487467)
HX_LOCAL_STACK_FRAME(_hx_pos_aba319191a839d6a_207_get_depth,"haxe.ui.core.TextDisplay","get_depth",0x1ebbd3e4,"haxe.ui.core.TextDisplay.get_depth","haxe/ui/core/TextDisplay.hx",207,0xd6487467)
HX_LOCAL_STACK_FRAME(_hx_pos_aba319191a839d6a_209_set_depth,"haxe.ui.core.TextDisplay","set_depth",0x020cbff0,"haxe.ui.core.TextDisplay.set_depth","haxe/ui/core/TextDisplay.hx",209,0xd6487467)
HX_LOCAL_STACK_FRAME(_hx_pos_aba319191a839d6a_219_updateDisplay,"haxe.ui.core.TextDisplay","updateDisplay",0xc5a822c3,"haxe.ui.core.TextDisplay.updateDisplay","haxe/ui/core/TextDisplay.hx",219,0xd6487467)
HX_LOCAL_STACK_FRAME(_hx_pos_aba319191a839d6a_222_validate,"haxe.ui.core.TextDisplay","validate",0x9c70e94c,"haxe.ui.core.TextDisplay.validate","haxe/ui/core/TextDisplay.hx",222,0xd6487467)
HX_LOCAL_STACK_FRAME(_hx_pos_aba319191a839d6a_240_validateInternal,"haxe.ui.core.TextDisplay","validateInternal",0xe6d538a9,"haxe.ui.core.TextDisplay.validateInternal","haxe/ui/core/TextDisplay.hx",240,0xd6487467)
namespace haxe{
namespace ui{
namespace core{

void TextDisplay_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_aba319191a839d6a_12_new)
HXLINE( 203)		this->_depth = (int)-1;
HXLINE(  16)		this->_isValidating = false;
HXLINE(  15)		this->_isAllInvalid = false;
HXLINE(  14)		this->_invalidationFlags =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  19)		super::__construct();
            	}

Dynamic TextDisplay_obj::__CreateEmpty() { return new TextDisplay_obj; }

void *TextDisplay_obj::_hx_vtable = 0;

Dynamic TextDisplay_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< TextDisplay_obj > _hx_result = new TextDisplay_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool TextDisplay_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x28910ebc) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x28910ebc;
	} else {
		return inClassId==(int)0x43899dcc;
	}
}

static ::haxe::ui::validation::IValidating_obj _hx_haxe_ui_core_TextDisplay__hx_haxe_ui_validation_IValidating= {
	( int (hx::Object::*)())&::haxe::ui::core::TextDisplay_obj::get_depth,
	( int (hx::Object::*)(int))&::haxe::ui::core::TextDisplay_obj::set_depth,
	( void (hx::Object::*)())&::haxe::ui::core::TextDisplay_obj::validate,
	( void (hx::Object::*)())&::haxe::ui::core::TextDisplay_obj::updateDisplay,
};

void *TextDisplay_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x1e962029: return &_hx_haxe_ui_core_TextDisplay__hx_haxe_ui_validation_IValidating;
	}
	return super::_hx_getInterface(inHash);
}

 ::haxe::ui::styles::Style TextDisplay_obj::get_textStyle(){
            	HX_STACKFRAME(&_hx_pos_aba319191a839d6a_27_get_textStyle)
HXDLIN(  27)		return this->_textStyle;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextDisplay_obj,get_textStyle,return )

 ::haxe::ui::styles::Style TextDisplay_obj::set_textStyle( ::haxe::ui::styles::Style value){
            	HX_STACKFRAME(&_hx_pos_aba319191a839d6a_30_set_textStyle)
HXDLIN(  30)		 ::haxe::ui::core::TextDisplay _gthis = hx::ObjectPtr<OBJ_>(this);
HXLINE(  31)		if (hx::IsNull( value )) {
HXLINE(  32)			return value;
            		}
HXLINE(  35)		bool _hx_tmp;
HXDLIN(  35)		bool _hx_tmp1;
HXDLIN(  35)		if (hx::IsNotNull( value->fontName )) {
HXLINE(  35)			_hx_tmp1 = hx::IsNull( this->_textStyle );
            		}
            		else {
HXLINE(  35)			_hx_tmp1 = false;
            		}
HXDLIN(  35)		if (!(_hx_tmp1)) {
HXLINE(  35)			_hx_tmp = (value->fontName != this->_textStyle->fontName);
            		}
            		else {
HXLINE(  35)			_hx_tmp = true;
            		}
HXDLIN(  35)		if (_hx_tmp) {
            			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_hx_Closure_0, ::haxe::ui::core::TextDisplay,_gthis) HXARGC(1)
            			void _hx_run( ::Dynamic fontInfo){
            				HX_STACKFRAME(&_hx_pos_aba319191a839d6a_36_set_textStyle)
HXLINE(  37)				_gthis->_fontInfo = fontInfo;
HXLINE(  38)				_gthis->invalidate(HX_("style",31,a5,1d,84));
HXLINE(  39)				_gthis->parentComponent->invalidate(HX_("style",31,a5,1d,84));
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE(  36)			::haxe::ui::ToolkitAssets_obj::get_instance()->getFont(value->fontName, ::Dynamic(new _hx_Closure_0(_gthis)),null());
            		}
            		else {
HXLINE(  42)			this->invalidate(HX_("style",31,a5,1d,84));
            		}
HXLINE(  45)		this->_textStyle = value;
HXLINE(  46)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextDisplay_obj,set_textStyle,return )

::String TextDisplay_obj::get_text(){
            	HX_STACKFRAME(&_hx_pos_aba319191a839d6a_51_get_text)
HXDLIN(  51)		return this->_text;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextDisplay_obj,get_text,return )

::String TextDisplay_obj::set_text(::String value){
            	HX_STACKFRAME(&_hx_pos_aba319191a839d6a_53_set_text)
HXLINE(  54)		if ((value == this->_text)) {
HXLINE(  55)			return value;
            		}
HXLINE(  58)		this->invalidate(HX_("data",2a,56,63,42));
HXLINE(  59)		this->_text = value;
HXLINE(  60)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextDisplay_obj,set_text,return )

Float TextDisplay_obj::get_left(){
            	HX_STACKFRAME(&_hx_pos_aba319191a839d6a_65_get_left)
HXDLIN(  65)		return this->_left;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextDisplay_obj,get_left,return )

Float TextDisplay_obj::set_left(Float value){
            	HX_STACKFRAME(&_hx_pos_aba319191a839d6a_67_set_left)
HXLINE(  68)		if ((value == this->_left)) {
HXLINE(  69)			return value;
            		}
HXLINE(  72)		this->invalidate(HX_("position",a9,a0,fa,ca));
HXLINE(  73)		this->_left = value;
HXLINE(  74)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextDisplay_obj,set_left,return )

Float TextDisplay_obj::get_top(){
            	HX_STACKFRAME(&_hx_pos_aba319191a839d6a_79_get_top)
HXDLIN(  79)		return this->_top;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextDisplay_obj,get_top,return )

Float TextDisplay_obj::set_top(Float value){
            	HX_STACKFRAME(&_hx_pos_aba319191a839d6a_81_set_top)
HXLINE(  82)		if ((value == this->_top)) {
HXLINE(  83)			return value;
            		}
HXLINE(  86)		this->invalidate(HX_("position",a9,a0,fa,ca));
HXLINE(  87)		this->_top = value;
HXLINE(  88)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextDisplay_obj,set_top,return )

Float TextDisplay_obj::set_width(Float value){
            	HX_STACKFRAME(&_hx_pos_aba319191a839d6a_92_set_width)
HXLINE(  93)		if ((this->_width == value)) {
HXLINE(  94)			return value;
            		}
HXLINE(  97)		this->invalidate(HX_("display",42,2a,4a,bb));
HXLINE(  98)		this->_width = value;
HXLINE(  99)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextDisplay_obj,set_width,return )

Float TextDisplay_obj::get_width(){
            	HX_STACKFRAME(&_hx_pos_aba319191a839d6a_103_get_width)
HXDLIN( 103)		return this->_width;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextDisplay_obj,get_width,return )

Float TextDisplay_obj::set_height(Float value){
            	HX_STACKFRAME(&_hx_pos_aba319191a839d6a_107_set_height)
HXLINE( 108)		if ((this->_height == value)) {
HXLINE( 109)			return value;
            		}
HXLINE( 112)		this->invalidate(HX_("display",42,2a,4a,bb));
HXLINE( 113)		this->_height = value;
HXLINE( 114)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextDisplay_obj,set_height,return )

Float TextDisplay_obj::get_height(){
            	HX_STACKFRAME(&_hx_pos_aba319191a839d6a_118_get_height)
HXDLIN( 118)		return this->_height;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextDisplay_obj,get_height,return )

Float TextDisplay_obj::get_textWidth(){
            	HX_STACKFRAME(&_hx_pos_aba319191a839d6a_122_get_textWidth)
HXLINE( 123)		bool _hx_tmp;
HXDLIN( 123)		if (hx::IsNotNull( this->_text )) {
HXLINE( 123)			_hx_tmp = (this->_text.length == (int)0);
            		}
            		else {
HXLINE( 123)			_hx_tmp = true;
            		}
HXDLIN( 123)		if (_hx_tmp) {
HXLINE( 124)			return (int)0;
            		}
HXLINE( 127)		if ((this->isInvalid(null()) == true)) {
HXLINE( 128)			this->validate();
            		}
HXLINE( 131)		return this->_textWidth;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextDisplay_obj,get_textWidth,return )

Float TextDisplay_obj::get_textHeight(){
            	HX_STACKFRAME(&_hx_pos_aba319191a839d6a_135_get_textHeight)
HXLINE( 140)		if ((this->isInvalid(null()) == true)) {
HXLINE( 141)			this->validate();
            		}
HXLINE( 144)		return this->_textHeight;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextDisplay_obj,get_textHeight,return )

bool TextDisplay_obj::get_multiline(){
            	HX_STACKFRAME(&_hx_pos_aba319191a839d6a_149_get_multiline)
HXDLIN( 149)		return this->_multiline;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextDisplay_obj,get_multiline,return )

bool TextDisplay_obj::set_multiline(bool value){
            	HX_STACKFRAME(&_hx_pos_aba319191a839d6a_151_set_multiline)
HXLINE( 152)		if ((value == this->_multiline)) {
HXLINE( 153)			return value;
            		}
HXLINE( 156)		this->invalidate(HX_("style",31,a5,1d,84));
HXLINE( 157)		this->_multiline = value;
HXLINE( 158)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextDisplay_obj,set_multiline,return )

bool TextDisplay_obj::get_wordWrap(){
            	HX_STACKFRAME(&_hx_pos_aba319191a839d6a_163_get_wordWrap)
HXDLIN( 163)		return this->_wordWrap;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextDisplay_obj,get_wordWrap,return )

bool TextDisplay_obj::set_wordWrap(bool value){
            	HX_STACKFRAME(&_hx_pos_aba319191a839d6a_165_set_wordWrap)
HXLINE( 166)		if ((value == this->_wordWrap)) {
HXLINE( 167)			return value;
            		}
HXLINE( 170)		this->invalidate(HX_("style",31,a5,1d,84));
HXLINE( 171)		this->_wordWrap = value;
HXLINE( 172)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextDisplay_obj,set_wordWrap,return )

bool TextDisplay_obj::isInvalid(::String __o_flag){
::String flag = __o_flag.Default(HX_HCSTRING("all","\x21","\xf9","\x49","\x00"));
            	HX_STACKFRAME(&_hx_pos_aba319191a839d6a_175_isInvalid)
HXLINE( 176)		if ((this->_isAllInvalid == true)) {
HXLINE( 177)			return true;
            		}
HXLINE( 180)		if ((flag == HX_("all",21,f9,49,00))) {
HXLINE( 181)			{
HXLINE( 181)				 ::Dynamic value = this->_invalidationFlags->iterator();
HXDLIN( 181)				while(( (bool)(value->__Field(HX_("hasNext",6d,a5,46,18),hx::paccDynamic)()) )){
HXLINE( 181)					bool value1 = ( (bool)(value->__Field(HX_("next",f3,84,02,49),hx::paccDynamic)()) );
HXLINE( 182)					return true;
            				}
            			}
HXLINE( 185)			return false;
            		}
HXLINE( 188)		return this->_invalidationFlags->exists(flag);
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextDisplay_obj,isInvalid,return )

void TextDisplay_obj::invalidate(::String __o_flag){
::String flag = __o_flag.Default(HX_HCSTRING("all","\x21","\xf9","\x49","\x00"));
            	HX_STACKFRAME(&_hx_pos_aba319191a839d6a_192_invalidate)
HXDLIN( 192)		if ((flag == HX_("all",21,f9,49,00))) {
HXLINE( 193)			this->_isAllInvalid = true;
            		}
            		else {
HXLINE( 196)			bool _hx_tmp;
HXDLIN( 196)			if ((flag != HX_("all",21,f9,49,00))) {
HXLINE( 196)				_hx_tmp = !(this->_invalidationFlags->exists(flag));
            			}
            			else {
HXLINE( 196)				_hx_tmp = false;
            			}
HXDLIN( 196)			if (_hx_tmp) {
HXLINE( 197)				this->_invalidationFlags->set(flag,true);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextDisplay_obj,invalidate,(void))

int TextDisplay_obj::get_depth(){
            	HX_STACKFRAME(&_hx_pos_aba319191a839d6a_207_get_depth)
HXDLIN( 207)		return this->_depth;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextDisplay_obj,get_depth,return )

int TextDisplay_obj::set_depth(int value){
            	HX_STACKFRAME(&_hx_pos_aba319191a839d6a_209_set_depth)
HXLINE( 210)		if ((this->_depth == value)) {
HXLINE( 211)			return value;
            		}
HXLINE( 214)		this->_depth = value;
HXLINE( 216)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextDisplay_obj,set_depth,return )

void TextDisplay_obj::updateDisplay(){
            	HX_STACKFRAME(&_hx_pos_aba319191a839d6a_219_updateDisplay)
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextDisplay_obj,updateDisplay,(void))

void TextDisplay_obj::validate(){
            	HX_STACKFRAME(&_hx_pos_aba319191a839d6a_222_validate)
HXLINE( 223)		bool _hx_tmp;
HXDLIN( 223)		if ((this->_isValidating != true)) {
HXLINE( 223)			_hx_tmp = (this->isInvalid(null()) == false);
            		}
            		else {
HXLINE( 223)			_hx_tmp = true;
            		}
HXDLIN( 223)		if (_hx_tmp) {
HXLINE( 225)			return;
            		}
HXLINE( 228)		this->_isValidating = true;
HXLINE( 230)		this->validateInternal();
HXLINE( 232)		{
HXLINE( 232)			 ::Dynamic flag = this->_invalidationFlags->keys();
HXDLIN( 232)			while(( (bool)(flag->__Field(HX_("hasNext",6d,a5,46,18),hx::paccDynamic)()) )){
HXLINE( 232)				::String flag1 = ( (::String)(flag->__Field(HX_("next",f3,84,02,49),hx::paccDynamic)()) );
HXLINE( 233)				this->_invalidationFlags->remove(flag1);
            			}
            		}
HXLINE( 236)		this->_isAllInvalid = false;
HXLINE( 237)		this->_isValidating = false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextDisplay_obj,validate,(void))

void TextDisplay_obj::validateInternal(){
            	HX_STACKFRAME(&_hx_pos_aba319191a839d6a_240_validateInternal)
HXLINE( 241)		bool dataInvalid = this->isInvalid(HX_("data",2a,56,63,42));
HXLINE( 242)		bool styleInvalid = this->isInvalid(HX_("style",31,a5,1d,84));
HXLINE( 243)		bool positionInvalid = this->isInvalid(HX_("position",a9,a0,fa,ca));
HXLINE( 244)		bool displayInvalid = this->isInvalid(HX_("display",42,2a,4a,bb));
HXLINE( 245)		bool measureInvalid = this->isInvalid(HX_("measure",5e,fb,e9,3c));
HXLINE( 247)		if (dataInvalid) {
HXLINE( 248)			this->validateData();
            		}
HXLINE( 251)		if (styleInvalid) {
HXLINE( 252)			if (!(this->validateStyle())) {
HXLINE( 252)				measureInvalid = measureInvalid;
            			}
            			else {
HXLINE( 252)				measureInvalid = true;
            			}
            		}
HXLINE( 255)		bool _hx_tmp;
HXDLIN( 255)		if (!(positionInvalid)) {
HXLINE( 255)			_hx_tmp = styleInvalid;
            		}
            		else {
HXLINE( 255)			_hx_tmp = true;
            		}
HXDLIN( 255)		if (_hx_tmp) {
HXLINE( 256)			this->validatePosition();
            		}
HXLINE( 259)		if (displayInvalid) {
HXLINE( 260)			this->validateDisplay();
            		}
HXLINE( 263)		bool _hx_tmp1;
HXDLIN( 263)		bool _hx_tmp2;
HXDLIN( 263)		if (!(dataInvalid)) {
HXLINE( 263)			_hx_tmp2 = displayInvalid;
            		}
            		else {
HXLINE( 263)			_hx_tmp2 = true;
            		}
HXDLIN( 263)		if (!(_hx_tmp2)) {
HXLINE( 263)			_hx_tmp1 = measureInvalid;
            		}
            		else {
HXLINE( 263)			_hx_tmp1 = true;
            		}
HXDLIN( 263)		if (_hx_tmp1) {
HXLINE( 264)			this->measureText();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextDisplay_obj,validateInternal,(void))


hx::ObjectPtr< TextDisplay_obj > TextDisplay_obj::__new() {
	hx::ObjectPtr< TextDisplay_obj > __this = new TextDisplay_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< TextDisplay_obj > TextDisplay_obj::__alloc(hx::Ctx *_hx_ctx) {
	TextDisplay_obj *__this = (TextDisplay_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(TextDisplay_obj), true, "haxe.ui.core.TextDisplay"));
	*(void **)__this = TextDisplay_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

TextDisplay_obj::TextDisplay_obj()
{
}

void TextDisplay_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TextDisplay);
	HX_MARK_MEMBER_NAME(_invalidationFlags,"_invalidationFlags");
	HX_MARK_MEMBER_NAME(_isAllInvalid,"_isAllInvalid");
	HX_MARK_MEMBER_NAME(_isValidating,"_isValidating");
	HX_MARK_MEMBER_NAME(textWidth,"textWidth");
	HX_MARK_MEMBER_NAME(textHeight,"textHeight");
	HX_MARK_MEMBER_NAME(_depth,"_depth");
	 ::haxe::ui::backend::TextDisplayBase_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TextDisplay_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_invalidationFlags,"_invalidationFlags");
	HX_VISIT_MEMBER_NAME(_isAllInvalid,"_isAllInvalid");
	HX_VISIT_MEMBER_NAME(_isValidating,"_isValidating");
	HX_VISIT_MEMBER_NAME(textWidth,"textWidth");
	HX_VISIT_MEMBER_NAME(textHeight,"textHeight");
	HX_VISIT_MEMBER_NAME(_depth,"_depth");
	 ::haxe::ui::backend::TextDisplayBase_obj::__Visit(HX_VISIT_ARG);
}

hx::Val TextDisplay_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"top") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_top() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_text() ); }
		if (HX_FIELD_EQ(inName,"left") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_left() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_width() ); }
		if (HX_FIELD_EQ(inName,"depth") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_depth() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_height() ); }
		if (HX_FIELD_EQ(inName,"_depth") ) { return hx::Val( _depth ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"get_top") ) { return hx::Val( get_top_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_top") ) { return hx::Val( set_top_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_text") ) { return hx::Val( get_text_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_text") ) { return hx::Val( set_text_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_left") ) { return hx::Val( get_left_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_left") ) { return hx::Val( set_left_dyn() ); }
		if (HX_FIELD_EQ(inName,"wordWrap") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_wordWrap() ); }
		if (HX_FIELD_EQ(inName,"validate") ) { return hx::Val( validate_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"textStyle") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_textStyle() ); }
		if (HX_FIELD_EQ(inName,"set_width") ) { return hx::Val( set_width_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_width") ) { return hx::Val( get_width_dyn() ); }
		if (HX_FIELD_EQ(inName,"textWidth") ) { return hx::Val( inCallProp == hx::paccAlways ? get_textWidth() : textWidth ); }
		if (HX_FIELD_EQ(inName,"multiline") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_multiline() ); }
		if (HX_FIELD_EQ(inName,"isInvalid") ) { return hx::Val( isInvalid_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_depth") ) { return hx::Val( get_depth_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_depth") ) { return hx::Val( set_depth_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"set_height") ) { return hx::Val( set_height_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_height") ) { return hx::Val( get_height_dyn() ); }
		if (HX_FIELD_EQ(inName,"textHeight") ) { return hx::Val( inCallProp == hx::paccAlways ? get_textHeight() : textHeight ); }
		if (HX_FIELD_EQ(inName,"invalidate") ) { return hx::Val( invalidate_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_wordWrap") ) { return hx::Val( get_wordWrap_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_wordWrap") ) { return hx::Val( set_wordWrap_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_isAllInvalid") ) { return hx::Val( _isAllInvalid ); }
		if (HX_FIELD_EQ(inName,"_isValidating") ) { return hx::Val( _isValidating ); }
		if (HX_FIELD_EQ(inName,"get_textStyle") ) { return hx::Val( get_textStyle_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_textStyle") ) { return hx::Val( set_textStyle_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_textWidth") ) { return hx::Val( get_textWidth_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_multiline") ) { return hx::Val( get_multiline_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_multiline") ) { return hx::Val( set_multiline_dyn() ); }
		if (HX_FIELD_EQ(inName,"updateDisplay") ) { return hx::Val( updateDisplay_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_textHeight") ) { return hx::Val( get_textHeight_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"validateInternal") ) { return hx::Val( validateInternal_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_invalidationFlags") ) { return hx::Val( _invalidationFlags ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val TextDisplay_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"top") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_top(inValue.Cast< Float >()) ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_text(inValue.Cast< ::String >()) ); }
		if (HX_FIELD_EQ(inName,"left") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_left(inValue.Cast< Float >()) ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_width(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"depth") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_depth(inValue.Cast< int >()) ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_height(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"_depth") ) { _depth=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"wordWrap") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_wordWrap(inValue.Cast< bool >()) ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"textStyle") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_textStyle(inValue.Cast<  ::haxe::ui::styles::Style >()) ); }
		if (HX_FIELD_EQ(inName,"textWidth") ) { textWidth=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"multiline") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_multiline(inValue.Cast< bool >()) ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"textHeight") ) { textHeight=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_isAllInvalid") ) { _isAllInvalid=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_isValidating") ) { _isValidating=inValue.Cast< bool >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_invalidationFlags") ) { _invalidationFlags=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TextDisplay_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_invalidationFlags","\xca","\x12","\x21","\xcb"));
	outFields->push(HX_HCSTRING("_isAllInvalid","\x3f","\x9b","\x7e","\xb8"));
	outFields->push(HX_HCSTRING("_isValidating","\xbc","\xc6","\x7a","\x96"));
	outFields->push(HX_HCSTRING("textStyle","\x44","\x35","\x0b","\x1d"));
	outFields->push(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"));
	outFields->push(HX_HCSTRING("left","\x07","\x08","\xb0","\x47"));
	outFields->push(HX_HCSTRING("top","\x95","\x66","\x58","\x00"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("textWidth","\x19","\x46","\x50","\x63"));
	outFields->push(HX_HCSTRING("textHeight","\x74","\x88","\x3c","\x39"));
	outFields->push(HX_HCSTRING("multiline","\xed","\xd2","\x11","\x9e"));
	outFields->push(HX_HCSTRING("wordWrap","\xb4","\x14","\xdb","\x00"));
	outFields->push(HX_HCSTRING("_depth","\x44","\x38","\x11","\xd3"));
	outFields->push(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo TextDisplay_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(TextDisplay_obj,_invalidationFlags),HX_HCSTRING("_invalidationFlags","\xca","\x12","\x21","\xcb")},
	{hx::fsBool,(int)offsetof(TextDisplay_obj,_isAllInvalid),HX_HCSTRING("_isAllInvalid","\x3f","\x9b","\x7e","\xb8")},
	{hx::fsBool,(int)offsetof(TextDisplay_obj,_isValidating),HX_HCSTRING("_isValidating","\xbc","\xc6","\x7a","\x96")},
	{hx::fsFloat,(int)offsetof(TextDisplay_obj,textWidth),HX_HCSTRING("textWidth","\x19","\x46","\x50","\x63")},
	{hx::fsFloat,(int)offsetof(TextDisplay_obj,textHeight),HX_HCSTRING("textHeight","\x74","\x88","\x3c","\x39")},
	{hx::fsInt,(int)offsetof(TextDisplay_obj,_depth),HX_HCSTRING("_depth","\x44","\x38","\x11","\xd3")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *TextDisplay_obj_sStaticStorageInfo = 0;
#endif

static ::String TextDisplay_obj_sMemberFields[] = {
	HX_HCSTRING("_invalidationFlags","\xca","\x12","\x21","\xcb"),
	HX_HCSTRING("_isAllInvalid","\x3f","\x9b","\x7e","\xb8"),
	HX_HCSTRING("_isValidating","\xbc","\xc6","\x7a","\x96"),
	HX_HCSTRING("get_textStyle","\x1b","\x09","\x6f","\xde"),
	HX_HCSTRING("set_textStyle","\x27","\xeb","\x74","\x23"),
	HX_HCSTRING("get_text","\x36","\x88","\xb4","\xcc"),
	HX_HCSTRING("set_text","\xaa","\xe1","\x11","\x7b"),
	HX_HCSTRING("get_left","\x90","\xc3","\x6a","\xc7"),
	HX_HCSTRING("set_left","\x04","\x1d","\xc8","\x75"),
	HX_HCSTRING("get_top","\x2c","\x2f","\xcd","\x26"),
	HX_HCSTRING("set_top","\x38","\xc0","\xce","\x19"),
	HX_HCSTRING("set_width","\x69","\xfe","\x5c","\xf1"),
	HX_HCSTRING("get_width","\x5d","\x12","\x0c","\x0e"),
	HX_HCSTRING("set_height","\x24","\x16","\x51","\xf6"),
	HX_HCSTRING("get_height","\xb0","\x77","\xd3","\xf2"),
	HX_HCSTRING("textWidth","\x19","\x46","\x50","\x63"),
	HX_HCSTRING("get_textWidth","\xf0","\x19","\xb4","\x24"),
	HX_HCSTRING("textHeight","\x74","\x88","\x3c","\x39"),
	HX_HCSTRING("get_textHeight","\xbd","\x10","\x32","\xaf"),
	HX_HCSTRING("get_multiline","\xc4","\xa6","\x75","\x5f"),
	HX_HCSTRING("set_multiline","\xd0","\x88","\x7b","\xa4"),
	HX_HCSTRING("get_wordWrap","\xbd","\xc8","\xf4","\xb5"),
	HX_HCSTRING("set_wordWrap","\x31","\xec","\xed","\xca"),
	HX_HCSTRING("isInvalid","\x2d","\x58","\x46","\x3f"),
	HX_HCSTRING("invalidate","\x7b","\x19","\x2a","\x87"),
	HX_HCSTRING("_depth","\x44","\x38","\x11","\xd3"),
	HX_HCSTRING("get_depth","\x5a","\x4d","\xd3","\x1a"),
	HX_HCSTRING("set_depth","\x66","\x39","\x24","\xfe"),
	HX_HCSTRING("updateDisplay","\x39","\x8f","\xb8","\x86"),
	HX_HCSTRING("validate","\x96","\xd0","\xe3","\x04"),
	HX_HCSTRING("validateInternal","\xf3","\x79","\xcf","\xe0"),
	::String(null()) };

static void TextDisplay_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextDisplay_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void TextDisplay_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextDisplay_obj::__mClass,"__mClass");
};

#endif

hx::Class TextDisplay_obj::__mClass;

void TextDisplay_obj::__register()
{
	hx::Object *dummy = new TextDisplay_obj;
	TextDisplay_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.core.TextDisplay","\x78","\x36","\x65","\x13");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = TextDisplay_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(TextDisplay_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TextDisplay_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = TextDisplay_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TextDisplay_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TextDisplay_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace core
