// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_EventBase
#include <haxe/ui/backend/EventBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ScreenBase
#include <haxe/ui/backend/ScreenBase.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Button
#include <haxe/ui/components/Button.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Label
#include <haxe/ui/components/Label.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_Box
#include <haxe/ui/containers/Box.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_HBox
#include <haxe/ui/containers/HBox.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_dialogs_Dialog
#include <haxe/ui/containers/dialogs/Dialog.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_dialogs_DialogButton
#include <haxe/ui/containers/dialogs/DialogButton.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_dialogs_DialogOptions
#include <haxe/ui/containers/dialogs/DialogOptions.h>
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
#ifndef INCLUDED_haxe_ui_core_Screen
#include <haxe/ui/core/Screen.h>
#endif
#ifndef INCLUDED_haxe_ui_core_UIEvent
#include <haxe/ui/core/UIEvent.h>
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
#ifndef INCLUDED_haxe_ui_layouts_VerticalLayout
#include <haxe/ui/layouts/VerticalLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_f22ce9c60b952717_21_new,"haxe.ui.containers.dialogs.Dialog","new",0x34905b47,"haxe.ui.containers.dialogs.Dialog.new","haxe/ui/containers/dialogs/Dialog.hx",21,0x366f3767)
HX_LOCAL_STACK_FRAME(_hx_pos_f22ce9c60b952717_28_createChildren,"haxe.ui.containers.dialogs.Dialog","createChildren",0x44bc38d4,"haxe.ui.containers.dialogs.Dialog.createChildren","haxe/ui/containers/dialogs/Dialog.hx",28,0x366f3767)
HX_LOCAL_STACK_FRAME(_hx_pos_f22ce9c60b952717_31_createTitleBar,"haxe.ui.containers.dialogs.Dialog","createTitleBar",0xa11d02b0,"haxe.ui.containers.dialogs.Dialog.createTitleBar","haxe/ui/containers/dialogs/Dialog.hx",31,0x366f3767)
HX_LOCAL_STACK_FRAME(_hx_pos_f22ce9c60b952717_61_createButtonBar,"haxe.ui.containers.dialogs.Dialog","createButtonBar",0x4383cdcc,"haxe.ui.containers.dialogs.Dialog.createButtonBar","haxe/ui/containers/dialogs/Dialog.hx",61,0x366f3767)
HX_LOCAL_STACK_FRAME(_hx_pos_f22ce9c60b952717_77_addComponent,"haxe.ui.containers.dialogs.Dialog","addComponent",0x1abc7295,"haxe.ui.containers.dialogs.Dialog.addComponent","haxe/ui/containers/dialogs/Dialog.hx",77,0x366f3767)
HX_LOCAL_STACK_FRAME(_hx_pos_f22ce9c60b952717_96_close,"haxe.ui.containers.dialogs.Dialog","close",0x6d056a5f,"haxe.ui.containers.dialogs.Dialog.close","haxe/ui/containers/dialogs/Dialog.hx",96,0x366f3767)
HX_LOCAL_STACK_FRAME(_hx_pos_f22ce9c60b952717_120_addButton,"haxe.ui.containers.dialogs.Dialog","addButton",0xb322c91a,"haxe.ui.containers.dialogs.Dialog.addButton","haxe/ui/containers/dialogs/Dialog.hx",120,0x366f3767)
HX_LOCAL_STACK_FRAME(_hx_pos_f22ce9c60b952717_145_get_dialogOptions,"haxe.ui.containers.dialogs.Dialog","get_dialogOptions",0x10853bf4,"haxe.ui.containers.dialogs.Dialog.get_dialogOptions","haxe/ui/containers/dialogs/Dialog.hx",145,0x366f3767)
HX_LOCAL_STACK_FRAME(_hx_pos_f22ce9c60b952717_147_set_dialogOptions,"haxe.ui.containers.dialogs.Dialog","set_dialogOptions",0x33f31400,"haxe.ui.containers.dialogs.Dialog.set_dialogOptions","haxe/ui/containers/dialogs/Dialog.hx",147,0x366f3767)
HX_LOCAL_STACK_FRAME(_hx_pos_f22ce9c60b952717_164__onButtonClick,"haxe.ui.containers.dialogs.Dialog","_onButtonClick",0xb95cead1,"haxe.ui.containers.dialogs.Dialog._onButtonClick","haxe/ui/containers/dialogs/Dialog.hx",164,0x366f3767)
HX_LOCAL_STACK_FRAME(_hx_pos_90706e6254ccaf85_1_cloneComponent,"haxe.ui.containers.dialogs.Dialog","cloneComponent",0xa86e8a19,"haxe.ui.containers.dialogs.Dialog.cloneComponent","src/haxe/ui/containers/dialogs/Dialog.hx",1,0x3c6265b2)
HX_LOCAL_STACK_FRAME(_hx_pos_90706e6254ccaf85_2_self,"haxe.ui.containers.dialogs.Dialog","self",0xcd0d8ac5,"haxe.ui.containers.dialogs.Dialog.self","src/haxe/ui/containers/dialogs/Dialog.hx",2,0x3c6265b2)
namespace haxe{
namespace ui{
namespace containers{
namespace dialogs{

void Dialog_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_f22ce9c60b952717_21_new)
HXDLIN(  21)		super::__construct();
            	}

Dynamic Dialog_obj::__CreateEmpty() { return new Dialog_obj; }

void *Dialog_obj::_hx_vtable = 0;

Dynamic Dialog_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Dialog_obj > _hx_result = new Dialog_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Dialog_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x4a06d0bc) {
		if (inClassId<=(int)0x0b312307) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0b312307;
		} else {
			return inClassId==(int)0x4a06d0bc;
		}
	} else {
		return inClassId==(int)0x7140e8dc;
	}
}

void Dialog_obj::createChildren(){
            	HX_GC_STACKFRAME(&_hx_pos_f22ce9c60b952717_28_createChildren)
HXDLIN(  28)		this->set_layout( ::haxe::ui::layouts::VerticalLayout_obj::__alloc( HX_CTX ));
            	}


void Dialog_obj::createTitleBar(){
            	HX_GC_STACKFRAME(&_hx_pos_f22ce9c60b952717_31_createTitleBar)
HXLINE(  32)		if (hx::IsEq( this->get_native(),true )) {
HXLINE(  33)			return;
            		}
HXLINE(  35)		if (hx::IsNull( this->_titleBar )) {
HXLINE(  36)			this->_titleBar =  ::haxe::ui::containers::Box_obj::__alloc( HX_CTX );
HXLINE(  37)			this->_titleBar->set_id(HX_("dialog-title-bar",59,ee,55,9a));
HXLINE(  38)			this->_titleBar->addClass(HX_("dialog-title-bar",59,ee,55,9a),null(),null());
HXLINE(  40)			this->_title =  ::haxe::ui::components::Label_obj::__alloc( HX_CTX );
HXLINE(  41)			this->_title->set_text(this->_options->title);
HXLINE(  42)			this->_title->set_id(HX_("dialog-title",13,1d,5d,fa));
HXLINE(  43)			this->_title->addClass(HX_("dialog-title",13,1d,5d,fa),null(),null());
HXLINE(  44)			this->_titleBar->addComponent(this->_title);
HXLINE(  46)			this->_closeButton =  ::haxe::ui::components::Button_obj::__alloc( HX_CTX );
HXLINE(  47)			this->_closeButton->set_id(HX_("dialog-close-button",0c,bf,1f,02));
HXLINE(  48)			this->_closeButton->addClass(HX_("dialog-close-button",0c,bf,1f,02),null(),null());
HXLINE(  49)			this->_closeButton->registerEvent(HX_("click",48,7c,5e,48),this->_onButtonClick_dyn());
HXLINE(  50)			 ::haxe::ui::containers::dialogs::DialogButton dialogButton =  ::haxe::ui::containers::dialogs::DialogButton_obj::__alloc( HX_CTX ,null(),null(),null());
HXLINE(  51)			dialogButton->closesDialog = true;
HXLINE(  52)			dialogButton->id = (HX_("",00,00,00,00) + (int)4);
HXLINE(  53)			this->_closeButton->userData = dialogButton;
HXLINE(  54)			this->_titleBar->addComponent(this->_closeButton);
HXLINE(  56)			this->addComponent(this->_titleBar);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Dialog_obj,createTitleBar,(void))

void Dialog_obj::createButtonBar(){
            	HX_GC_STACKFRAME(&_hx_pos_f22ce9c60b952717_61_createButtonBar)
HXDLIN(  61)		bool _hx_tmp;
HXDLIN(  61)		bool _hx_tmp1;
HXDLIN(  61)		if (hx::IsNull( this->_buttons )) {
HXDLIN(  61)			_hx_tmp1 = hx::IsNotNull( this->_options );
            		}
            		else {
HXDLIN(  61)			_hx_tmp1 = false;
            		}
HXDLIN(  61)		if (_hx_tmp1) {
HXDLIN(  61)			_hx_tmp = (this->_options->buttons->length > (int)0);
            		}
            		else {
HXDLIN(  61)			_hx_tmp = false;
            		}
HXDLIN(  61)		if (_hx_tmp) {
HXLINE(  62)			this->_buttons =  ::haxe::ui::containers::HBox_obj::__alloc( HX_CTX );
HXLINE(  63)			this->_buttons->set_id(HX_("dialog-buttons",7c,6e,c4,06));
HXLINE(  64)			this->_buttons->addClass(HX_("dialog-buttons",7c,6e,c4,06),null(),null());
HXLINE(  66)			{
HXLINE(  66)				int _g = (int)0;
HXDLIN(  66)				::Array< ::Dynamic> _g1 = this->_options->buttons;
HXDLIN(  66)				while((_g < _g1->length)){
HXLINE(  66)					 ::haxe::ui::containers::dialogs::DialogButton b = _g1->__get(_g).StaticCast<  ::haxe::ui::containers::dialogs::DialogButton >();
HXDLIN(  66)					_g = (_g + (int)1);
HXLINE(  67)					this->addButton(b);
            				}
            			}
HXLINE(  70)			this->addComponent(this->_buttons);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Dialog_obj,createButtonBar,(void))

 ::haxe::ui::core::Component Dialog_obj::addComponent( ::haxe::ui::core::Component child){
            	HX_STACKFRAME(&_hx_pos_f22ce9c60b952717_77_addComponent)
HXLINE(  78)		 ::haxe::ui::core::Component r = null();
HXLINE(  79)		bool _hx_tmp;
HXDLIN(  79)		if (hx::IsNotEq( child,this->_titleBar )) {
HXLINE(  79)			_hx_tmp = hx::IsEq( child,this->_buttons );
            		}
            		else {
HXLINE(  79)			_hx_tmp = true;
            		}
HXDLIN(  79)		if (_hx_tmp) {
HXLINE(  80)			r = this->super::addComponent(child);
            		}
            		else {
HXLINE(  82)			child->addClass(HX_("dialog-content",74,a9,c6,55),null(),null());
HXLINE(  83)			r = this->super::addComponent(child);
HXLINE(  84)			this->createButtonBar();
            		}
HXLINE(  87)		return r;
            	}


void Dialog_obj::close(::String buttonId){
            	HX_GC_STACKFRAME(&_hx_pos_f22ce9c60b952717_96_close)
HXLINE(  97)		this->get_screen()->hideDialog(hx::ObjectPtr<OBJ_>(this));
HXLINE(  99)		 ::haxe::ui::containers::dialogs::DialogButton dialogButton = null();
HXLINE( 101)		if (hx::IsNotNull( this->_buttons )) {
HXLINE( 102)			 ::Dynamic button = this->_buttons->findComponent(buttonId,null(),null(),null());
HXLINE( 103)			if (hx::IsNotNull( button )) {
HXLINE( 104)				dialogButton = hx::TCast<  ::haxe::ui::containers::dialogs::DialogButton >::cast(button);
            			}
            		}
HXLINE( 108)		if (hx::IsNull( dialogButton )) {
HXLINE( 109)			dialogButton =  ::haxe::ui::containers::dialogs::DialogButton_obj::__alloc( HX_CTX ,buttonId,null(),null());
            		}
HXLINE( 112)		if (hx::IsNotNull( this->callback )) {
HXLINE( 113)			this->callback(dialogButton);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Dialog_obj,close,(void))

 ::haxe::ui::components::Button Dialog_obj::addButton( ::haxe::ui::containers::dialogs::DialogButton dialogButton){
            	HX_GC_STACKFRAME(&_hx_pos_f22ce9c60b952717_120_addButton)
HXLINE( 121)		if (hx::IsNull( this->_buttons )) {
HXLINE( 122)			this->createButtonBar();
            		}
HXLINE( 125)		 ::haxe::ui::components::Button button =  ::haxe::ui::components::Button_obj::__alloc( HX_CTX );
HXLINE( 126)		button->set_id(dialogButton->id);
HXLINE( 127)		button->set_text(dialogButton->text);
HXLINE( 128)		button->set_styleNames(dialogButton->styleNames);
HXLINE( 129)		button->set_styleString(dialogButton->style);
HXLINE( 130)		button->set_icon(dialogButton->icon);
HXLINE( 131)		button->userData = dialogButton;
HXLINE( 132)		button->registerEvent(HX_("click",48,7c,5e,48),this->_onButtonClick_dyn());
HXLINE( 134)		this->_buttons->addComponent(button);
HXLINE( 136)		return button;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Dialog_obj,addButton,return )

 ::haxe::ui::containers::dialogs::DialogOptions Dialog_obj::get_dialogOptions(){
            	HX_STACKFRAME(&_hx_pos_f22ce9c60b952717_145_get_dialogOptions)
HXDLIN( 145)		return this->_options;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Dialog_obj,get_dialogOptions,return )

 ::haxe::ui::containers::dialogs::DialogOptions Dialog_obj::set_dialogOptions( ::haxe::ui::containers::dialogs::DialogOptions value){
            	HX_STACKFRAME(&_hx_pos_f22ce9c60b952717_147_set_dialogOptions)
HXLINE( 148)		this->_options = value;
HXLINE( 149)		if (hx::IsNotNull( this->_options->styleNames )) {
HXLINE( 150)			this->set_styleNames(this->_options->styleNames);
            		}
HXLINE( 152)		this->createTitleBar();
HXLINE( 153)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Dialog_obj,set_dialogOptions,return )

void Dialog_obj::_onButtonClick( ::haxe::ui::core::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_f22ce9c60b952717_164__onButtonClick)
HXLINE( 165)		 ::haxe::ui::containers::dialogs::DialogButton dialogButton = null();
HXLINE( 166)		if (hx::IsNotNull( event->target->userData )) {
HXLINE( 167)			dialogButton = hx::TCast<  ::haxe::ui::containers::dialogs::DialogButton >::cast(event->target->userData);
            		}
HXLINE( 169)		bool _hx_tmp;
HXDLIN( 169)		if (hx::IsNotNull( dialogButton )) {
HXLINE( 169)			_hx_tmp = (dialogButton->closesDialog == true);
            		}
            		else {
HXLINE( 169)			_hx_tmp = true;
            		}
HXDLIN( 169)		if (_hx_tmp) {
HXLINE( 170)			this->close(null());
            		}
HXLINE( 172)		if (hx::IsNotNull( this->callback )) {
HXLINE( 173)			this->callback(dialogButton);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Dialog_obj,_onButtonClick,(void))

 ::haxe::ui::core::Component Dialog_obj::cloneComponent(){
            	HX_STACKFRAME(&_hx_pos_90706e6254ccaf85_1_cloneComponent)
HXLINE(   2)		 ::haxe::ui::containers::dialogs::Dialog c = ( ( ::haxe::ui::containers::dialogs::Dialog)(this->super::cloneComponent()) );
HXLINE(   3)		return c;
            	}


 ::haxe::ui::core::Component Dialog_obj::self(){
            	HX_GC_STACKFRAME(&_hx_pos_90706e6254ccaf85_2_self)
HXDLIN(   2)		return  ::haxe::ui::containers::dialogs::Dialog_obj::__alloc( HX_CTX );
            	}



hx::ObjectPtr< Dialog_obj > Dialog_obj::__new() {
	hx::ObjectPtr< Dialog_obj > __this = new Dialog_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< Dialog_obj > Dialog_obj::__alloc(hx::Ctx *_hx_ctx) {
	Dialog_obj *__this = (Dialog_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Dialog_obj), true, "haxe.ui.containers.dialogs.Dialog"));
	*(void **)__this = Dialog_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Dialog_obj::Dialog_obj()
{
}

void Dialog_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Dialog);
	HX_MARK_MEMBER_NAME(_titleBar,"_titleBar");
	HX_MARK_MEMBER_NAME(_buttons,"_buttons");
	HX_MARK_MEMBER_NAME(_title,"_title");
	HX_MARK_MEMBER_NAME(_closeButton,"_closeButton");
	HX_MARK_MEMBER_NAME(_options,"_options");
	HX_MARK_MEMBER_NAME(callback,"callback");
	 ::haxe::ui::core::Component_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Dialog_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_titleBar,"_titleBar");
	HX_VISIT_MEMBER_NAME(_buttons,"_buttons");
	HX_VISIT_MEMBER_NAME(_title,"_title");
	HX_VISIT_MEMBER_NAME(_closeButton,"_closeButton");
	HX_VISIT_MEMBER_NAME(_options,"_options");
	HX_VISIT_MEMBER_NAME(callback,"callback");
	 ::haxe::ui::core::Component_obj::__Visit(HX_VISIT_ARG);
}

hx::Val Dialog_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return hx::Val( self_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"close") ) { return hx::Val( close_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_title") ) { return hx::Val( _title ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_buttons") ) { return hx::Val( _buttons ); }
		if (HX_FIELD_EQ(inName,"_options") ) { return hx::Val( _options ); }
		if (HX_FIELD_EQ(inName,"callback") ) { return hx::Val( callback ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_titleBar") ) { return hx::Val( _titleBar ); }
		if (HX_FIELD_EQ(inName,"addButton") ) { return hx::Val( addButton_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_closeButton") ) { return hx::Val( _closeButton ); }
		if (HX_FIELD_EQ(inName,"addComponent") ) { return hx::Val( addComponent_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"dialogOptions") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_dialogOptions() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"createChildren") ) { return hx::Val( createChildren_dyn() ); }
		if (HX_FIELD_EQ(inName,"createTitleBar") ) { return hx::Val( createTitleBar_dyn() ); }
		if (HX_FIELD_EQ(inName,"_onButtonClick") ) { return hx::Val( _onButtonClick_dyn() ); }
		if (HX_FIELD_EQ(inName,"cloneComponent") ) { return hx::Val( cloneComponent_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"createButtonBar") ) { return hx::Val( createButtonBar_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_dialogOptions") ) { return hx::Val( get_dialogOptions_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_dialogOptions") ) { return hx::Val( set_dialogOptions_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Dialog_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_title") ) { _title=inValue.Cast<  ::haxe::ui::components::Label >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_buttons") ) { _buttons=inValue.Cast<  ::haxe::ui::containers::HBox >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_options") ) { _options=inValue.Cast<  ::haxe::ui::containers::dialogs::DialogOptions >(); return inValue; }
		if (HX_FIELD_EQ(inName,"callback") ) { callback=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_titleBar") ) { _titleBar=inValue.Cast<  ::haxe::ui::containers::Box >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_closeButton") ) { _closeButton=inValue.Cast<  ::haxe::ui::components::Button >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"dialogOptions") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_dialogOptions(inValue.Cast<  ::haxe::ui::containers::dialogs::DialogOptions >()) ); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Dialog_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_titleBar","\x7a","\xda","\x60","\x14"));
	outFields->push(HX_HCSTRING("_buttons","\xc2","\xab","\x2d","\x04"));
	outFields->push(HX_HCSTRING("_title","\xd9","\x5c","\x22","\x0c"));
	outFields->push(HX_HCSTRING("_closeButton","\xcb","\x35","\x3a","\xfa"));
	outFields->push(HX_HCSTRING("_options","\xdf","\x8c","\xb6","\x19"));
	outFields->push(HX_HCSTRING("dialogOptions","\x76","\xff","\xad","\x51"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Dialog_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ui::containers::Box*/ ,(int)offsetof(Dialog_obj,_titleBar),HX_HCSTRING("_titleBar","\x7a","\xda","\x60","\x14")},
	{hx::fsObject /*::haxe::ui::containers::HBox*/ ,(int)offsetof(Dialog_obj,_buttons),HX_HCSTRING("_buttons","\xc2","\xab","\x2d","\x04")},
	{hx::fsObject /*::haxe::ui::components::Label*/ ,(int)offsetof(Dialog_obj,_title),HX_HCSTRING("_title","\xd9","\x5c","\x22","\x0c")},
	{hx::fsObject /*::haxe::ui::components::Button*/ ,(int)offsetof(Dialog_obj,_closeButton),HX_HCSTRING("_closeButton","\xcb","\x35","\x3a","\xfa")},
	{hx::fsObject /*::haxe::ui::containers::dialogs::DialogOptions*/ ,(int)offsetof(Dialog_obj,_options),HX_HCSTRING("_options","\xdf","\x8c","\xb6","\x19")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Dialog_obj,callback),HX_HCSTRING("callback","\xc5","\x99","\x06","\x7f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Dialog_obj_sStaticStorageInfo = 0;
#endif

static ::String Dialog_obj_sMemberFields[] = {
	HX_HCSTRING("_titleBar","\x7a","\xda","\x60","\x14"),
	HX_HCSTRING("_buttons","\xc2","\xab","\x2d","\x04"),
	HX_HCSTRING("_title","\xd9","\x5c","\x22","\x0c"),
	HX_HCSTRING("_closeButton","\xcb","\x35","\x3a","\xfa"),
	HX_HCSTRING("createChildren","\x5b","\x98","\xa4","\xc2"),
	HX_HCSTRING("createTitleBar","\x37","\x62","\x05","\x1f"),
	HX_HCSTRING("createButtonBar","\x65","\x04","\xef","\xf0"),
	HX_HCSTRING("addComponent","\x5c","\x12","\xa8","\x0e"),
	HX_HCSTRING("close","\xb8","\x17","\x63","\x48"),
	HX_HCSTRING("addButton","\xf3","\x96","\x04","\x92"),
	HX_HCSTRING("_options","\xdf","\x8c","\xb6","\x19"),
	HX_HCSTRING("get_dialogOptions","\xcd","\x0a","\x1e","\x58"),
	HX_HCSTRING("set_dialogOptions","\xd9","\xe2","\x8b","\x7b"),
	HX_HCSTRING("callback","\xc5","\x99","\x06","\x7f"),
	HX_HCSTRING("_onButtonClick","\x58","\x4a","\x45","\x37"),
	HX_HCSTRING("cloneComponent","\xa0","\xe9","\x56","\x26"),
	HX_HCSTRING("self","\x8c","\x8b","\x50","\x4c"),
	::String(null()) };

static void Dialog_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Dialog_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Dialog_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Dialog_obj::__mClass,"__mClass");
};

#endif

hx::Class Dialog_obj::__mClass;

void Dialog_obj::__register()
{
	hx::Object *dummy = new Dialog_obj;
	Dialog_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.containers.dialogs.Dialog","\xd5","\xab","\xc9","\xd3");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Dialog_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Dialog_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Dialog_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Dialog_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Dialog_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Dialog_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace containers
} // end namespace dialogs
