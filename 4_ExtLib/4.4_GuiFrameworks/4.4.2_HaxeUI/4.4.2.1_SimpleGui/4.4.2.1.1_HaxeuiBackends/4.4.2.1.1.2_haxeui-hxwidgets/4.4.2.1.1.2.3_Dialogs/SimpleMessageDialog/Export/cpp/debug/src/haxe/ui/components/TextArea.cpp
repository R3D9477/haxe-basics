// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_EventBase
#include <haxe/ui/backend/EventBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_TextDisplayBase
#include <haxe/ui/backend/TextDisplayBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_TextInputBase
#include <haxe/ui/backend/TextInputBase.h>
#endif
#ifndef INCLUDED_haxe_ui_components_HScroll
#include <haxe/ui/components/HScroll.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Scroll
#include <haxe/ui/components/Scroll.h>
#endif
#ifndef INCLUDED_haxe_ui_components_TextArea
#include <haxe/ui/components/TextArea.h>
#endif
#ifndef INCLUDED_haxe_ui_components_TextAreaDefaultPlaceholderBehaviour
#include <haxe/ui/components/TextAreaDefaultPlaceholderBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_components_TextAreaDefaultTextBehaviour
#include <haxe/ui/components/TextAreaDefaultTextBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_components_TextAreaDefaultWrapBehaviour
#include <haxe/ui/components/TextAreaDefaultWrapBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_components_TextAreaLayout
#include <haxe/ui/components/TextAreaLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_components_VScroll
#include <haxe/ui/components/VScroll.h>
#endif
#ifndef INCLUDED_haxe_ui_core_Behaviour
#include <haxe/ui/core/Behaviour.h>
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
#ifndef INCLUDED_haxe_ui_core_InteractiveComponent
#include <haxe/ui/core/InteractiveComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_core_MouseEvent
#include <haxe/ui/core/MouseEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_core_TextInput
#include <haxe/ui/core/TextInput.h>
#endif
#ifndef INCLUDED_haxe_ui_core_UIEvent
#include <haxe/ui/core/UIEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_focus_FocusManager
#include <haxe/ui/focus/FocusManager.h>
#endif
#ifndef INCLUDED_haxe_ui_focus_IFocusable
#include <haxe/ui/focus/IFocusable.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_DefaultLayout
#include <haxe/ui/layouts/DefaultLayout.h>
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
#ifndef INCLUDED_haxe_ui_util_VariantType
#include <haxe/ui/util/VariantType.h>
#endif
#ifndef INCLUDED_haxe_ui_util__Variant_Variant_Impl_
#include <haxe/ui/util/_Variant/Variant_Impl_.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_24565d82bfa0fa8b_19_new,"haxe.ui.components.TextArea","new",0xc5d01272,"haxe.ui.components.TextArea.new","haxe/ui/components/TextArea.hx",19,0xfe441d7d)
HX_LOCAL_STACK_FRAME(_hx_pos_24565d82bfa0fa8b_30_get_empty,"haxe.ui.components.TextArea","get_empty",0x331fb276,"haxe.ui.components.TextArea.get_empty","haxe/ui/components/TextArea.hx",30,0xfe441d7d)
HX_LOCAL_STACK_FRAME(_hx_pos_24565d82bfa0fa8b_41_get_placeholder,"haxe.ui.components.TextArea","get_placeholder",0x1335401c,"haxe.ui.components.TextArea.get_placeholder","haxe/ui/components/TextArea.hx",41,0xfe441d7d)
HX_LOCAL_STACK_FRAME(_hx_pos_24565d82bfa0fa8b_44_set_placeholder,"haxe.ui.components.TextArea","set_placeholder",0x0f00bd28,"haxe.ui.components.TextArea.set_placeholder","haxe/ui/components/TextArea.hx",44,0xfe441d7d)
HX_LOCAL_STACK_FRAME(_hx_pos_24565d82bfa0fa8b_57_get_wrap,"haxe.ui.components.TextArea","get_wrap",0x67faf201,"haxe.ui.components.TextArea.get_wrap","haxe/ui/components/TextArea.hx",57,0xfe441d7d)
HX_LOCAL_STACK_FRAME(_hx_pos_24565d82bfa0fa8b_59_set_wrap,"haxe.ui.components.TextArea","set_wrap",0x16584b75,"haxe.ui.components.TextArea.set_wrap","haxe/ui/components/TextArea.hx",59,0xfe441d7d)
HX_LOCAL_STACK_FRAME(_hx_pos_24565d82bfa0fa8b_73_set_text,"haxe.ui.components.TextArea","set_text",0x1452de58,"haxe.ui.components.TextArea.set_text","haxe/ui/components/TextArea.hx",73,0xfe441d7d)
HX_LOCAL_STACK_FRAME(_hx_pos_24565d82bfa0fa8b_83_set_focus,"haxe.ui.components.TextArea","set_focus",0xab1fc3cd,"haxe.ui.components.TextArea.set_focus","haxe/ui/components/TextArea.hx",83,0xfe441d7d)
HX_LOCAL_STACK_FRAME(_hx_pos_24565d82bfa0fa8b_93_createDefaults,"haxe.ui.components.TextArea","createDefaults",0x6f9102dc,"haxe.ui.components.TextArea.createDefaults","haxe/ui/components/TextArea.hx",93,0xfe441d7d)
HX_LOCAL_STACK_FRAME(_hx_pos_24565d82bfa0fa8b_103_createChildren,"haxe.ui.components.TextArea","createChildren",0x30614b89,"haxe.ui.components.TextArea.createChildren","haxe/ui/components/TextArea.hx",103,0xfe441d7d)
HX_LOCAL_STACK_FRAME(_hx_pos_24565d82bfa0fa8b_121_destroyChildren,"haxe.ui.components.TextArea","destroyChildren",0x79cea16b,"haxe.ui.components.TextArea.destroyChildren","haxe/ui/components/TextArea.hx",121,0xfe441d7d)
HX_LOCAL_STACK_FRAME(_hx_pos_24565d82bfa0fa8b_129_applyStyle,"haxe.ui.components.TextArea","applyStyle",0x586b2511,"haxe.ui.components.TextArea.applyStyle","haxe/ui/components/TextArea.hx",129,0xfe441d7d)
HX_LOCAL_STACK_FRAME(_hx_pos_24565d82bfa0fa8b_138_checkScrolls,"haxe.ui.components.TextArea","checkScrolls",0x8186d78c,"haxe.ui.components.TextArea.checkScrolls","haxe/ui/components/TextArea.hx",138,0xfe441d7d)
HX_LOCAL_STACK_FRAME(_hx_pos_24565d82bfa0fa8b_182__onMouseWheel,"haxe.ui.components.TextArea","_onMouseWheel",0x01ffa9a6,"haxe.ui.components.TextArea._onMouseWheel","haxe/ui/components/TextArea.hx",182,0xfe441d7d)
HX_LOCAL_STACK_FRAME(_hx_pos_24565d82bfa0fa8b_192__onMouseDown,"haxe.ui.components.TextArea","_onMouseDown",0xda372db7,"haxe.ui.components.TextArea._onMouseDown","haxe/ui/components/TextArea.hx",192,0xfe441d7d)
HX_LOCAL_STACK_FRAME(_hx_pos_24565d82bfa0fa8b_196__onTextChanged,"haxe.ui.components.TextArea","_onTextChanged",0xb7456c57,"haxe.ui.components.TextArea._onTextChanged","haxe/ui/components/TextArea.hx",196,0xfe441d7d)
HX_LOCAL_STACK_FRAME(_hx_pos_24565d82bfa0fa8b_199__onScrollChange,"haxe.ui.components.TextArea","_onScrollChange",0x19e4a2cd,"haxe.ui.components.TextArea._onScrollChange","haxe/ui/components/TextArea.hx",199,0xfe441d7d)
HX_LOCAL_STACK_FRAME(_hx_pos_24565d82bfa0fa8b_213_invalidateScroll,"haxe.ui.components.TextArea","invalidateScroll",0x2ebe8e96,"haxe.ui.components.TextArea.invalidateScroll","haxe/ui/components/TextArea.hx",213,0xfe441d7d)
HX_LOCAL_STACK_FRAME(_hx_pos_24565d82bfa0fa8b_216_validateInternal,"haxe.ui.components.TextArea","validateInternal",0xbd81d4a1,"haxe.ui.components.TextArea.validateInternal","haxe/ui/components/TextArea.hx",216,0xfe441d7d)
HX_LOCAL_STACK_FRAME(_hx_pos_24565d82bfa0fa8b_229_validateScroll,"haxe.ui.components.TextArea","validateScroll",0x08e96471,"haxe.ui.components.TextArea.validateScroll","haxe/ui/components/TextArea.hx",229,0xfe441d7d)
HX_LOCAL_STACK_FRAME(_hx_pos_24565d82bfa0fa8b_232_validateData,"haxe.ui.components.TextArea","validateData",0xf98b418e,"haxe.ui.components.TextArea.validateData","haxe/ui/components/TextArea.hx",232,0xfe441d7d)
static const ::String _hx_array_data_f49db180_21[] = {
	HX_("text",ad,cc,f9,4c),HX_("value",71,7f,b8,31),
};
HX_LOCAL_STACK_FRAME(_hx_pos_365f0c9a9e6bde72_1_cloneComponent,"haxe.ui.components.TextArea","cloneComponent",0x94139cce,"haxe.ui.components.TextArea.cloneComponent","src/haxe/ui/components/TextArea.hx",1,0x9d843188)
HX_LOCAL_STACK_FRAME(_hx_pos_365f0c9a9e6bde72_2_self,"haxe.ui.components.TextArea","self",0x538e193a,"haxe.ui.components.TextArea.self","src/haxe/ui/components/TextArea.hx",2,0x9d843188)
namespace haxe{
namespace ui{
namespace components{

void TextArea_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_24565d82bfa0fa8b_19_new)
HXDLIN(  19)		super::__construct();
            	}

Dynamic TextArea_obj::__CreateEmpty() { return new TextArea_obj; }

void *TextArea_obj::_hx_vtable = 0;

Dynamic TextArea_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< TextArea_obj > _hx_result = new TextArea_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool TextArea_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x4a06d0bc) {
		if (inClassId<=(int)0x15d82f92) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x15d82f92;
		} else {
			return inClassId==(int)0x4a06d0bc;
		}
	} else {
		return inClassId==(int)0x5f23eff4 || inClassId==(int)0x7140e8dc;
	}
}

static ::haxe::ui::focus::IFocusable_obj _hx_haxe_ui_components_TextArea__hx_haxe_ui_focus_IFocusable= {
	( bool (hx::Object::*)())&::haxe::ui::components::TextArea_obj::get_focus,
	( bool (hx::Object::*)(bool))&::haxe::ui::components::TextArea_obj::set_focus,
	( bool (hx::Object::*)())&::haxe::ui::components::TextArea_obj::get_allowFocus,
	( bool (hx::Object::*)(bool))&::haxe::ui::components::TextArea_obj::set_allowFocus,
};

void *TextArea_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x04f087c7: return &_hx_haxe_ui_components_TextArea__hx_haxe_ui_focus_IFocusable;
	}
	return super::_hx_getInterface(inHash);
}

bool TextArea_obj::get_empty(){
            	HX_STACKFRAME(&_hx_pos_24565d82bfa0fa8b_30_get_empty)
HXDLIN(  30)		if (hx::IsNotNull( this->_text )) {
HXDLIN(  30)			return (this->_text.length == (int)0);
            		}
            		else {
HXDLIN(  30)			return true;
            		}
HXDLIN(  30)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextArea_obj,get_empty,return )

::String TextArea_obj::get_placeholder(){
            	HX_STACKFRAME(&_hx_pos_24565d82bfa0fa8b_41_get_placeholder)
HXDLIN(  41)		return this->_placeholder;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextArea_obj,get_placeholder,return )

::String TextArea_obj::set_placeholder(::String value){
            	HX_STACKFRAME(&_hx_pos_24565d82bfa0fa8b_44_set_placeholder)
HXLINE(  45)		if ((this->_placeholder == value)) {
HXLINE(  46)			return value;
            		}
HXLINE(  49)		this->invalidate(HX_("data",2a,56,63,42));
HXLINE(  50)		this->_placeholder = value;
HXLINE(  51)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextArea_obj,set_placeholder,return )

bool TextArea_obj::get_wrap(){
            	HX_STACKFRAME(&_hx_pos_24565d82bfa0fa8b_57_get_wrap)
HXDLIN(  57)		return this->_wrap;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextArea_obj,get_wrap,return )

bool TextArea_obj::set_wrap(bool value){
            	HX_STACKFRAME(&_hx_pos_24565d82bfa0fa8b_59_set_wrap)
HXLINE(  60)		if ((value == this->_wrap)) {
HXLINE(  61)			return value;
            		}
HXLINE(  64)		this->invalidate(HX_("data",2a,56,63,42));
HXLINE(  65)		this->_wrap = value;
HXLINE(  66)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextArea_obj,set_wrap,return )

::String TextArea_obj::set_text(::String value){
            	HX_STACKFRAME(&_hx_pos_24565d82bfa0fa8b_73_set_text)
HXLINE(  74)		if ((value == this->_text)) {
HXLINE(  75)			return value;
            		}
HXLINE(  78)		this->invalidate(HX_("data",2a,56,63,42));
HXLINE(  79)		value = this->super::set_text(value);
HXLINE(  80)		return value;
            	}


bool TextArea_obj::set_focus(bool value){
            	HX_STACKFRAME(&_hx_pos_24565d82bfa0fa8b_83_set_focus)
HXLINE(  84)		bool _hx_tmp;
HXDLIN(  84)		if ((this->_focus != value)) {
HXLINE(  84)			_hx_tmp = (this->get_allowFocus() == false);
            		}
            		else {
HXLINE(  84)			_hx_tmp = true;
            		}
HXDLIN(  84)		if (_hx_tmp) {
HXLINE(  85)			return value;
            		}
HXLINE(  88)		this->invalidate(HX_("data",2a,56,63,42));
HXLINE(  89)		this->super::set_focus(value);
HXLINE(  90)		return value;
            	}


void TextArea_obj::createDefaults(){
            	HX_GC_STACKFRAME(&_hx_pos_24565d82bfa0fa8b_93_createDefaults)
HXLINE(  94)		this->super::createDefaults();
HXLINE(  95)		 ::haxe::ds::StringMap _g =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXDLIN(  95)		_g->set(HX_("text",ad,cc,f9,4c),( ( ::haxe::ui::core::Behaviour)( ::haxe::ui::components::TextAreaDefaultTextBehaviour_obj::__alloc( HX_CTX ,hx::ObjectPtr<OBJ_>(this))) ));
HXDLIN(  95)		_g->set(HX_("placeholder",73,73,f3,ba),( ( ::haxe::ui::core::Behaviour)( ::haxe::ui::components::TextAreaDefaultPlaceholderBehaviour_obj::__alloc( HX_CTX ,hx::ObjectPtr<OBJ_>(this))) ));
HXDLIN(  95)		_g->set(HX_("wrap",ca,39,ff,4e),( ( ::haxe::ui::core::Behaviour)( ::haxe::ui::components::TextAreaDefaultWrapBehaviour_obj::__alloc( HX_CTX ,hx::ObjectPtr<OBJ_>(this))) ));
HXDLIN(  95)		this->defaultBehaviours(_g);
HXLINE( 100)		this->_defaultLayout =  ::haxe::ui::components::TextAreaLayout_obj::__alloc( HX_CTX );
            	}


void TextArea_obj::createChildren(){
            	HX_STACKFRAME(&_hx_pos_24565d82bfa0fa8b_103_createChildren)
HXLINE( 104)		this->super::createChildren();
HXLINE( 114)		this->getTextInput()->set_multiline(true);
HXLINE( 116)		this->registerEvent(HX_("mousewheel",56,b8,59,54),this->_onMouseWheel_dyn());
HXLINE( 117)		this->registerEvent(HX_("mousedown",07,85,e9,03),this->_onMouseDown_dyn());
HXLINE( 118)		this->registerEvent(HX_("change",70,91,72,b7),this->_onTextChanged_dyn());
            	}


void TextArea_obj::destroyChildren(){
            	HX_STACKFRAME(&_hx_pos_24565d82bfa0fa8b_121_destroyChildren)
HXLINE( 122)		this->super::destroyChildren();
HXLINE( 124)		this->unregisterEvent(HX_("mousewheel",56,b8,59,54),this->_onMouseWheel_dyn());
HXLINE( 125)		this->unregisterEvent(HX_("mousedown",07,85,e9,03),this->_onMouseDown_dyn());
HXLINE( 126)		this->unregisterEvent(HX_("change",70,91,72,b7),this->_onTextChanged_dyn());
            	}


void TextArea_obj::applyStyle( ::haxe::ui::styles::Style style){
            	HX_STACKFRAME(&_hx_pos_24565d82bfa0fa8b_129_applyStyle)
HXLINE( 130)		this->super::applyStyle(style);
HXLINE( 131)		if ((this->hasTextInput() == true)) {
HXLINE( 132)			this->getTextInput()->set_textStyle(style);
            		}
            	}


void TextArea_obj::checkScrolls(){
            	HX_GC_STACKFRAME(&_hx_pos_24565d82bfa0fa8b_138_checkScrolls)
HXLINE( 139)		if (hx::IsEq( this->get_native(),true )) {
HXLINE( 140)			return;
            		}
HXLINE( 143)		 ::haxe::ui::core::TextInput textInput = this->getTextInput();
HXLINE( 144)		Float _hx_tmp = textInput->get_textWidth();
HXDLIN( 144)		if ((_hx_tmp > textInput->get_width())) {
HXLINE( 145)			if (hx::IsNull( this->_hscroll )) {
HXLINE( 146)				this->_hscroll =  ::haxe::ui::components::HScroll_obj::__alloc( HX_CTX );
HXLINE( 147)				this->_hscroll->set_id(HX_("textarea-hscroll",a2,22,fa,36));
HXLINE( 148)				this->addComponent(this->_hscroll);
HXLINE( 149)				this->_hscroll->registerEvent(HX_("change",70,91,72,b7),this->_onScrollChange_dyn());
            			}
HXLINE( 151)			 ::haxe::ui::components::HScroll _hx_tmp1 = this->_hscroll;
HXDLIN( 151)			Float _hx_tmp2 = textInput->get_textWidth();
HXDLIN( 151)			_hx_tmp1->set_max((_hx_tmp2 - this->getTextInput()->get_width()));
HXLINE( 152)			 ::haxe::ui::components::HScroll _hx_tmp3 = this->_hscroll;
HXDLIN( 152)			_hx_tmp3->set_pos(textInput->get_hscrollPos());
HXLINE( 154)			 ::haxe::ui::components::HScroll _hx_tmp4 = this->_hscroll;
HXDLIN( 154)			Float _hx_tmp5 = textInput->get_width();
HXDLIN( 154)			Float _hx_tmp6 = (_hx_tmp5 * this->_hscroll->get_max());
HXDLIN( 154)			_hx_tmp4->set_pageSize(((Float)_hx_tmp6 / (Float)textInput->get_textWidth()));
HXLINE( 155)			this->_hscroll->show();
            		}
            		else {
HXLINE( 157)			if (hx::IsNotNull( this->_hscroll )) {
HXLINE( 158)				this->_hscroll->hide();
            			}
            		}
HXLINE( 162)		Float _hx_tmp7 = textInput->get_textHeight();
HXDLIN( 162)		if ((_hx_tmp7 > textInput->get_height())) {
HXLINE( 163)			if (hx::IsNull( this->_vscroll )) {
HXLINE( 164)				this->_vscroll =  ::haxe::ui::components::VScroll_obj::__alloc( HX_CTX );
HXLINE( 165)				this->_vscroll->set_id(HX_("textarea-vscroll",30,a1,26,7d));
HXLINE( 166)				this->addComponent(this->_vscroll);
HXLINE( 167)				this->_vscroll->registerEvent(HX_("change",70,91,72,b7),this->_onScrollChange_dyn());
            			}
HXLINE( 169)			 ::haxe::ui::components::VScroll _hx_tmp8 = this->_vscroll;
HXDLIN( 169)			Float _hx_tmp9 = textInput->get_textHeight();
HXDLIN( 169)			_hx_tmp8->set_max((_hx_tmp9 - textInput->get_height()));
HXLINE( 170)			 ::haxe::ui::components::VScroll _hx_tmp10 = this->_vscroll;
HXDLIN( 170)			_hx_tmp10->set_pos(textInput->get_vscrollPos());
HXLINE( 172)			 ::haxe::ui::components::VScroll _hx_tmp11 = this->_vscroll;
HXDLIN( 172)			Float _hx_tmp12 = textInput->get_height();
HXDLIN( 172)			Float _hx_tmp13 = (_hx_tmp12 * this->_vscroll->get_max());
HXDLIN( 172)			_hx_tmp11->set_pageSize(((Float)_hx_tmp13 / (Float)textInput->get_textHeight()));
HXLINE( 173)			this->_vscroll->show();
            		}
            		else {
HXLINE( 175)			if (hx::IsNotNull( this->_vscroll )) {
HXLINE( 176)				this->_vscroll->hide();
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextArea_obj,checkScrolls,(void))

void TextArea_obj::_onMouseWheel( ::haxe::ui::core::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_24565d82bfa0fa8b_182__onMouseWheel)
HXDLIN( 182)		if (hx::IsNotNull( this->_vscroll )) {
HXLINE( 183)			if ((event->delta > (int)0)) {
HXLINE( 184)				 ::haxe::ui::components::VScroll _g = this->_vscroll;
HXDLIN( 184)				_g->set_pos((_g->get_pos() - (int)60));
            			}
            			else {
HXLINE( 185)				if ((event->delta < (int)0)) {
HXLINE( 186)					 ::haxe::ui::components::VScroll _g1 = this->_vscroll;
HXDLIN( 186)					_g1->set_pos((_g1->get_pos() + (int)60));
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextArea_obj,_onMouseWheel,(void))

void TextArea_obj::_onMouseDown( ::haxe::ui::core::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_24565d82bfa0fa8b_192__onMouseDown)
HXDLIN( 192)		::haxe::ui::focus::FocusManager_obj::get_instance()->set_focus(hx::ObjectPtr<OBJ_>(this));
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextArea_obj,_onMouseDown,(void))

void TextArea_obj::_onTextChanged( ::haxe::ui::core::UIEvent event){
            	HX_STACKFRAME(&_hx_pos_24565d82bfa0fa8b_196__onTextChanged)
HXDLIN( 196)		this->set_text(::haxe::ui::util::_Variant::Variant_Impl__obj::toString(this->behaviourGet(HX_("text",ad,cc,f9,4c))));
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextArea_obj,_onTextChanged,(void))

void TextArea_obj::_onScrollChange( ::haxe::ui::core::UIEvent e){
            	HX_STACKFRAME(&_hx_pos_24565d82bfa0fa8b_199__onScrollChange)
HXLINE( 200)		if (hx::IsNotNull( this->_hscroll )) {
HXLINE( 201)			 ::haxe::ui::core::TextInput _hx_tmp = this->getTextInput();
HXDLIN( 201)			_hx_tmp->set_hscrollPos(this->_hscroll->get_pos());
            		}
HXLINE( 203)		if (hx::IsNotNull( this->_vscroll )) {
HXLINE( 204)			 ::haxe::ui::core::TextInput _hx_tmp1 = this->getTextInput();
HXDLIN( 204)			_hx_tmp1->set_vscrollPos(this->_vscroll->get_pos());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextArea_obj,_onScrollChange,(void))

void TextArea_obj::invalidateScroll(){
            	HX_STACKFRAME(&_hx_pos_24565d82bfa0fa8b_213_invalidateScroll)
HXDLIN( 213)		this->invalidate(HX_("scroll",0d,d8,64,47));
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextArea_obj,invalidateScroll,(void))

void TextArea_obj::validateInternal(){
            	HX_STACKFRAME(&_hx_pos_24565d82bfa0fa8b_216_validateInternal)
HXLINE( 217)		bool dataInvalid = this->isInvalid(HX_("data",2a,56,63,42));
HXLINE( 218)		bool scrollInvalid = this->isInvalid(HX_("scroll",0d,d8,64,47));
HXLINE( 219)		bool layoutInvalid = this->isInvalid(HX_("layout",aa,ae,b8,58));
HXLINE( 221)		this->super::validateInternal();
HXLINE( 223)		bool _hx_tmp;
HXDLIN( 223)		bool _hx_tmp1;
HXDLIN( 223)		if (!(scrollInvalid)) {
HXLINE( 223)			_hx_tmp1 = layoutInvalid;
            		}
            		else {
HXLINE( 223)			_hx_tmp1 = true;
            		}
HXDLIN( 223)		if (!(_hx_tmp1)) {
HXLINE( 223)			_hx_tmp = dataInvalid;
            		}
            		else {
HXLINE( 223)			_hx_tmp = true;
            		}
HXDLIN( 223)		if (_hx_tmp) {
HXLINE( 224)			this->validateScroll();
            		}
            	}


void TextArea_obj::validateScroll(){
            	HX_STACKFRAME(&_hx_pos_24565d82bfa0fa8b_229_validateScroll)
HXDLIN( 229)		this->checkScrolls();
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextArea_obj,validateScroll,(void))

void TextArea_obj::validateData(){
            	HX_STACKFRAME(&_hx_pos_24565d82bfa0fa8b_232_validateData)
HXLINE( 233)		 ::haxe::ui::util::VariantType _hx_tmp = this->behaviourGet(HX_("placeholder",73,73,f3,ba));
HXDLIN( 233)		if ((::haxe::ui::util::_Variant::Variant_Impl__obj::toString(_hx_tmp) != this->_placeholder)) {
HXLINE( 234)			this->behaviourSet(HX_("placeholder",73,73,f3,ba),::haxe::ui::util::_Variant::Variant_Impl__obj::fromString(this->_placeholder));
            		}
HXLINE( 237)		 ::haxe::ui::util::VariantType _hx_tmp1 = this->behaviourGet(HX_("wordWrap",b4,14,db,00));
HXDLIN( 237)		if ((::haxe::ui::util::_Variant::Variant_Impl__obj::toBool(_hx_tmp1) != this->_wrap)) {
HXLINE( 238)			this->behaviourSet(HX_("wordWrap",b4,14,db,00),::haxe::ui::util::_Variant::Variant_Impl__obj::fromBool(this->_wrap));
            		}
HXLINE( 241)		::String text;
HXDLIN( 241)		if (hx::IsNotNull( this->_text )) {
HXLINE( 241)			text = this->_text;
            		}
            		else {
HXLINE( 241)			text = HX_("",00,00,00,00);
            		}
HXLINE( 242)		bool placeholderVisible = this->get_empty();
HXLINE( 245)		bool _hx_tmp2;
HXDLIN( 245)		if ((this->get_focus() == false)) {
HXLINE( 245)			_hx_tmp2 = hx::IsNotNull( this->_placeholder );
            		}
            		else {
HXLINE( 245)			_hx_tmp2 = false;
            		}
HXDLIN( 245)		if (_hx_tmp2) {
HXLINE( 246)			if ((text == HX_("",00,00,00,00))) {
HXLINE( 247)				text = this->_placeholder;
HXLINE( 248)				this->addClass(HX_(":empty",13,28,8d,a0),null(),null());
            			}
            			else {
HXLINE( 250)				this->removeClass(HX_(":empty",13,28,8d,a0),null(),null());
            			}
            		}
            		else {
HXLINE( 252)			if ((placeholderVisible == true)) {
HXLINE( 253)				text = HX_("",00,00,00,00);
HXLINE( 254)				this->removeClass(HX_(":empty",13,28,8d,a0),null(),null());
            			}
            		}
HXLINE( 257)		this->behaviourSet(HX_("text",ad,cc,f9,4c),::haxe::ui::util::_Variant::Variant_Impl__obj::fromString(text));
HXLINE( 258)		this->handleBindings(::Array_obj< ::String >::fromData( _hx_array_data_f49db180_21,2));
            	}


 ::haxe::ui::core::Component TextArea_obj::cloneComponent(){
            	HX_STACKFRAME(&_hx_pos_365f0c9a9e6bde72_1_cloneComponent)
HXLINE(   2)		 ::haxe::ui::components::TextArea c = ( ( ::haxe::ui::components::TextArea)(this->super::cloneComponent()) );
HXLINE(   3)		if (hx::IsNotNull( this->get_placeholder() )) {
HXLINE(   3)			c->set_placeholder(this->get_placeholder());
            		}
HXLINE(   5)		c->set_wrap(this->get_wrap());
HXLINE(   6)		return c;
            	}


 ::haxe::ui::core::Component TextArea_obj::self(){
            	HX_GC_STACKFRAME(&_hx_pos_365f0c9a9e6bde72_2_self)
HXDLIN(   2)		return  ::haxe::ui::components::TextArea_obj::__alloc( HX_CTX );
            	}



hx::ObjectPtr< TextArea_obj > TextArea_obj::__new() {
	hx::ObjectPtr< TextArea_obj > __this = new TextArea_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< TextArea_obj > TextArea_obj::__alloc(hx::Ctx *_hx_ctx) {
	TextArea_obj *__this = (TextArea_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(TextArea_obj), true, "haxe.ui.components.TextArea"));
	*(void **)__this = TextArea_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

TextArea_obj::TextArea_obj()
{
}

void TextArea_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TextArea);
	HX_MARK_MEMBER_NAME(_placeholder,"_placeholder");
	HX_MARK_MEMBER_NAME(_wrap,"_wrap");
	HX_MARK_MEMBER_NAME(_hscroll,"_hscroll");
	HX_MARK_MEMBER_NAME(_vscroll,"_vscroll");
	 ::haxe::ui::core::Component_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TextArea_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_placeholder,"_placeholder");
	HX_VISIT_MEMBER_NAME(_wrap,"_wrap");
	HX_VISIT_MEMBER_NAME(_hscroll,"_hscroll");
	HX_VISIT_MEMBER_NAME(_vscroll,"_vscroll");
	 ::haxe::ui::core::Component_obj::__Visit(HX_VISIT_ARG);
}

hx::Val TextArea_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"wrap") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_wrap() ); }
		if (HX_FIELD_EQ(inName,"self") ) { return hx::Val( self_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"empty") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_empty() ); }
		if (HX_FIELD_EQ(inName,"_wrap") ) { return hx::Val( _wrap ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_wrap") ) { return hx::Val( get_wrap_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_wrap") ) { return hx::Val( set_wrap_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_text") ) { return hx::Val( set_text_dyn() ); }
		if (HX_FIELD_EQ(inName,"_hscroll") ) { return hx::Val( _hscroll ); }
		if (HX_FIELD_EQ(inName,"_vscroll") ) { return hx::Val( _vscroll ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_empty") ) { return hx::Val( get_empty_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_focus") ) { return hx::Val( set_focus_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"applyStyle") ) { return hx::Val( applyStyle_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"placeholder") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_placeholder() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_placeholder") ) { return hx::Val( _placeholder ); }
		if (HX_FIELD_EQ(inName,"checkScrolls") ) { return hx::Val( checkScrolls_dyn() ); }
		if (HX_FIELD_EQ(inName,"_onMouseDown") ) { return hx::Val( _onMouseDown_dyn() ); }
		if (HX_FIELD_EQ(inName,"validateData") ) { return hx::Val( validateData_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_onMouseWheel") ) { return hx::Val( _onMouseWheel_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"createDefaults") ) { return hx::Val( createDefaults_dyn() ); }
		if (HX_FIELD_EQ(inName,"createChildren") ) { return hx::Val( createChildren_dyn() ); }
		if (HX_FIELD_EQ(inName,"_onTextChanged") ) { return hx::Val( _onTextChanged_dyn() ); }
		if (HX_FIELD_EQ(inName,"validateScroll") ) { return hx::Val( validateScroll_dyn() ); }
		if (HX_FIELD_EQ(inName,"cloneComponent") ) { return hx::Val( cloneComponent_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_placeholder") ) { return hx::Val( get_placeholder_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_placeholder") ) { return hx::Val( set_placeholder_dyn() ); }
		if (HX_FIELD_EQ(inName,"destroyChildren") ) { return hx::Val( destroyChildren_dyn() ); }
		if (HX_FIELD_EQ(inName,"_onScrollChange") ) { return hx::Val( _onScrollChange_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"invalidateScroll") ) { return hx::Val( invalidateScroll_dyn() ); }
		if (HX_FIELD_EQ(inName,"validateInternal") ) { return hx::Val( validateInternal_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val TextArea_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"wrap") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_wrap(inValue.Cast< bool >()) ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_wrap") ) { _wrap=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_hscroll") ) { _hscroll=inValue.Cast<  ::haxe::ui::components::HScroll >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_vscroll") ) { _vscroll=inValue.Cast<  ::haxe::ui::components::VScroll >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"placeholder") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_placeholder(inValue.Cast< ::String >()) ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_placeholder") ) { _placeholder=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TextArea_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("empty","\x8d","\x3a","\xda","\x6f"));
	outFields->push(HX_HCSTRING("_placeholder","\x74","\x21","\xfd","\x20"));
	outFields->push(HX_HCSTRING("placeholder","\x73","\x73","\xf3","\xba"));
	outFields->push(HX_HCSTRING("_wrap","\xa9","\x55","\x10","\x02"));
	outFields->push(HX_HCSTRING("wrap","\xca","\x39","\xff","\x4e"));
	outFields->push(HX_HCSTRING("_hscroll","\xf6","\x6f","\xd5","\x65"));
	outFields->push(HX_HCSTRING("_vscroll","\x84","\xee","\x01","\xac"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo TextArea_obj_sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(TextArea_obj,_placeholder),HX_HCSTRING("_placeholder","\x74","\x21","\xfd","\x20")},
	{hx::fsBool,(int)offsetof(TextArea_obj,_wrap),HX_HCSTRING("_wrap","\xa9","\x55","\x10","\x02")},
	{hx::fsObject /*::haxe::ui::components::HScroll*/ ,(int)offsetof(TextArea_obj,_hscroll),HX_HCSTRING("_hscroll","\xf6","\x6f","\xd5","\x65")},
	{hx::fsObject /*::haxe::ui::components::VScroll*/ ,(int)offsetof(TextArea_obj,_vscroll),HX_HCSTRING("_vscroll","\x84","\xee","\x01","\xac")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *TextArea_obj_sStaticStorageInfo = 0;
#endif

static ::String TextArea_obj_sMemberFields[] = {
	HX_HCSTRING("get_empty","\xe4","\x96","\x83","\xb3"),
	HX_HCSTRING("_placeholder","\x74","\x21","\xfd","\x20"),
	HX_HCSTRING("get_placeholder","\x0a","\x2b","\xd5","\x7b"),
	HX_HCSTRING("set_placeholder","\x16","\xa8","\xa0","\x77"),
	HX_HCSTRING("_wrap","\xa9","\x55","\x10","\x02"),
	HX_HCSTRING("get_wrap","\x53","\xf5","\xb9","\xce"),
	HX_HCSTRING("set_wrap","\xc7","\x4e","\x17","\x7d"),
	HX_HCSTRING("set_text","\xaa","\xe1","\x11","\x7b"),
	HX_HCSTRING("set_focus","\x3b","\xa8","\x83","\x2b"),
	HX_HCSTRING("createDefaults","\xae","\x4f","\xd4","\x01"),
	HX_HCSTRING("createChildren","\x5b","\x98","\xa4","\xc2"),
	HX_HCSTRING("destroyChildren","\x59","\x8c","\x6e","\xe2"),
	HX_HCSTRING("applyStyle","\xe3","\x20","\x6f","\x2f"),
	HX_HCSTRING("_hscroll","\xf6","\x6f","\xd5","\x65"),
	HX_HCSTRING("_vscroll","\x84","\xee","\x01","\xac"),
	HX_HCSTRING("checkScrolls","\xde","\xeb","\x5e","\x1e"),
	HX_HCSTRING("_onMouseWheel","\x14","\x5d","\x39","\xa2"),
	HX_HCSTRING("_onMouseDown","\x09","\x42","\x0f","\x77"),
	HX_HCSTRING("_onTextChanged","\x29","\xb9","\x88","\x49"),
	HX_HCSTRING("_onScrollChange","\xbb","\x8d","\x84","\x82"),
	HX_HCSTRING("invalidateScroll","\xe8","\x33","\x0c","\x52"),
	HX_HCSTRING("validateInternal","\xf3","\x79","\xcf","\xe0"),
	HX_HCSTRING("validateScroll","\x43","\xb1","\x2c","\x9b"),
	HX_HCSTRING("validateData","\xe0","\x55","\x63","\x96"),
	HX_HCSTRING("cloneComponent","\xa0","\xe9","\x56","\x26"),
	HX_HCSTRING("self","\x8c","\x8b","\x50","\x4c"),
	::String(null()) };

static void TextArea_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextArea_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void TextArea_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextArea_obj::__mClass,"__mClass");
};

#endif

hx::Class TextArea_obj::__mClass;

void TextArea_obj::__register()
{
	hx::Object *dummy = new TextArea_obj;
	TextArea_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.components.TextArea","\x80","\xb1","\x9d","\xf4");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = TextArea_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(TextArea_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TextArea_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = TextArea_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TextArea_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TextArea_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
