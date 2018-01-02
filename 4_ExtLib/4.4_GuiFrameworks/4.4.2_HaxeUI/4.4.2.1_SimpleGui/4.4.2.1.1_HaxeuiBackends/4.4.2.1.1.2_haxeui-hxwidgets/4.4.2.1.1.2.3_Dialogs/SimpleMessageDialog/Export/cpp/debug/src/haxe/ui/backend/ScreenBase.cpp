// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_EventBase
#include <haxe/ui/backend/EventBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ScreenBase
#include <haxe/ui/backend/ScreenBase.h>
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
#ifndef INCLUDED_haxe_ui_core_Screen
#include <haxe/ui/core/Screen.h>
#endif
#ifndef INCLUDED_haxe_ui_core_UIEvent
#include <haxe/ui/core/UIEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif
#ifndef INCLUDED_hx_widgets_Dialog
#include <hx/widgets/Dialog.h>
#endif
#ifndef INCLUDED_hx_widgets_Event
#include <hx/widgets/Event.h>
#endif
#ifndef INCLUDED_hx_widgets_EvtHandler
#include <hx/widgets/EvtHandler.h>
#endif
#ifndef INCLUDED_hx_widgets_Frame
#include <hx/widgets/Frame.h>
#endif
#ifndef INCLUDED_hx_widgets_MessageDialog
#include <hx/widgets/MessageDialog.h>
#endif
#ifndef INCLUDED_hx_widgets_NonOwnedWindow
#include <hx/widgets/NonOwnedWindow.h>
#endif
#ifndef INCLUDED_hx_widgets_Object
#include <hx/widgets/Object.h>
#endif
#ifndef INCLUDED_hx_widgets_Size
#include <hx/widgets/Size.h>
#endif
#ifndef INCLUDED_hx_widgets_TopLevelWindow
#include <hx/widgets/TopLevelWindow.h>
#endif
#ifndef INCLUDED_hx_widgets_Trackable
#include <hx/widgets/Trackable.h>
#endif
#ifndef INCLUDED_hx_widgets_Window
#include <hx/widgets/Window.h>
#endif
#ifndef INCLUDED_wx_widgets_Defs
#include <wx/widgets/Defs.h>
#endif
#ifndef INCLUDED_wx_widgets_EventType
#include <wx/widgets/EventType.h>
#endif
#ifndef INCLUDED_wx_widgets_styles_MessageDialogStyle
#include <wx/widgets/styles/MessageDialogStyle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_6f99d968e31f22fe_17_new,"haxe.ui.backend.ScreenBase","new",0x2ba37cdb,"haxe.ui.backend.ScreenBase.new","haxe/ui/backend/ScreenBase.hx",17,0xded7efb4)
HX_LOCAL_STACK_FRAME(_hx_pos_6f99d968e31f22fe_26_get_width,"haxe.ui.backend.ScreenBase","get_width",0x8534cd18,"haxe.ui.backend.ScreenBase.get_width","haxe/ui/backend/ScreenBase.hx",26,0xded7efb4)
HX_LOCAL_STACK_FRAME(_hx_pos_6f99d968e31f22fe_31_get_height,"haxe.ui.backend.ScreenBase","get_height",0xbf4e2095,"haxe.ui.backend.ScreenBase.get_height","haxe/ui/backend/ScreenBase.hx",31,0xded7efb4)
HX_LOCAL_STACK_FRAME(_hx_pos_6f99d968e31f22fe_36_get_dpi,"haxe.ui.backend.ScreenBase","get_dpi",0x63a011ef,"haxe.ui.backend.ScreenBase.get_dpi","haxe/ui/backend/ScreenBase.hx",36,0xded7efb4)
HX_LOCAL_STACK_FRAME(_hx_pos_6f99d968e31f22fe_40_addComponent,"haxe.ui.backend.ScreenBase","addComponent",0xedca7e81,"haxe.ui.backend.ScreenBase.addComponent","haxe/ui/backend/ScreenBase.hx",40,0xded7efb4)
HX_LOCAL_STACK_FRAME(_hx_pos_6f99d968e31f22fe_46_removeComponent,"haxe.ui.backend.ScreenBase","removeComponent",0x8e1084d4,"haxe.ui.backend.ScreenBase.removeComponent","haxe/ui/backend/ScreenBase.hx",46,0xded7efb4)
HX_LOCAL_STACK_FRAME(_hx_pos_6f99d968e31f22fe_55_messageDialog,"haxe.ui.backend.ScreenBase","messageDialog",0x8659f22a,"haxe.ui.backend.ScreenBase.messageDialog","haxe/ui/backend/ScreenBase.hx",55,0xded7efb4)
HX_LOCAL_STACK_FRAME(_hx_pos_6f99d968e31f22fe_90_showDialog,"haxe.ui.backend.ScreenBase","showDialog",0xe722528a,"haxe.ui.backend.ScreenBase.showDialog","haxe/ui/backend/ScreenBase.hx",90,0xded7efb4)
HX_LOCAL_STACK_FRAME(_hx_pos_6f99d968e31f22fe_112_hideDialog,"haxe.ui.backend.ScreenBase","hideDialog",0x1533540f,"haxe.ui.backend.ScreenBase.hideDialog","haxe/ui/backend/ScreenBase.hx",112,0xded7efb4)
HX_LOCAL_STACK_FRAME(_hx_pos_6f99d968e31f22fe_118_resizeComponent,"haxe.ui.backend.ScreenBase","resizeComponent",0xa9909124,"haxe.ui.backend.ScreenBase.resizeComponent","haxe/ui/backend/ScreenBase.hx",118,0xded7efb4)
HX_LOCAL_STACK_FRAME(_hx_pos_6f99d968e31f22fe_144_get_frame,"haxe.ui.backend.ScreenBase","get_frame",0xc1558f3f,"haxe.ui.backend.ScreenBase.get_frame","haxe/ui/backend/ScreenBase.hx",144,0xded7efb4)
HX_LOCAL_STACK_FRAME(_hx_pos_6f99d968e31f22fe_153_get_title,"haxe.ui.backend.ScreenBase","get_title",0xcb0d2caa,"haxe.ui.backend.ScreenBase.get_title","haxe/ui/backend/ScreenBase.hx",153,0xded7efb4)
HX_LOCAL_STACK_FRAME(_hx_pos_6f99d968e31f22fe_156_set_title,"haxe.ui.backend.ScreenBase","set_title",0xae5e18b6,"haxe.ui.backend.ScreenBase.set_title","haxe/ui/backend/ScreenBase.hx",156,0xded7efb4)
HX_LOCAL_STACK_FRAME(_hx_pos_6f99d968e31f22fe_166_addResizeListener,"haxe.ui.backend.ScreenBase","addResizeListener",0x2e953644,"haxe.ui.backend.ScreenBase.addResizeListener","haxe/ui/backend/ScreenBase.hx",166,0xded7efb4)
HX_LOCAL_STACK_FRAME(_hx_pos_6f99d968e31f22fe_160_addResizeListener,"haxe.ui.backend.ScreenBase","addResizeListener",0x2e953644,"haxe.ui.backend.ScreenBase.addResizeListener","haxe/ui/backend/ScreenBase.hx",160,0xded7efb4)
HX_LOCAL_STACK_FRAME(_hx_pos_6f99d968e31f22fe_183_handleSetComponentIndex,"haxe.ui.backend.ScreenBase","handleSetComponentIndex",0x47be5f8a,"haxe.ui.backend.ScreenBase.handleSetComponentIndex","haxe/ui/backend/ScreenBase.hx",183,0xded7efb4)
HX_LOCAL_STACK_FRAME(_hx_pos_6f99d968e31f22fe_191_supportsEvent,"haxe.ui.backend.ScreenBase","supportsEvent",0x0daeec31,"haxe.ui.backend.ScreenBase.supportsEvent","haxe/ui/backend/ScreenBase.hx",191,0xded7efb4)
HX_LOCAL_STACK_FRAME(_hx_pos_6f99d968e31f22fe_194_mapEvent,"haxe.ui.backend.ScreenBase","mapEvent",0xf34d6d83,"haxe.ui.backend.ScreenBase.mapEvent","haxe/ui/backend/ScreenBase.hx",194,0xded7efb4)
HX_LOCAL_STACK_FRAME(_hx_pos_6f99d968e31f22fe_197_unmapEvent,"haxe.ui.backend.ScreenBase","unmapEvent",0x3f45c81c,"haxe.ui.backend.ScreenBase.unmapEvent","haxe/ui/backend/ScreenBase.hx",197,0xded7efb4)
namespace haxe{
namespace ui{
namespace backend{

void ScreenBase_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_6f99d968e31f22fe_17_new)
HXLINE( 159)		this->_hasListener = false;
HXLINE(  39)		this->_hx___topLevelComponents = ::Array_obj< ::Dynamic>::__new();
            	}

Dynamic ScreenBase_obj::__CreateEmpty() { return new ScreenBase_obj; }

void *ScreenBase_obj::_hx_vtable = 0;

Dynamic ScreenBase_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ScreenBase_obj > _hx_result = new ScreenBase_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ScreenBase_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x095a7d57;
}

Float ScreenBase_obj::get_width(){
            	HX_STACKFRAME(&_hx_pos_6f99d968e31f22fe_26_get_width)
HXDLIN(  26)		return this->get_frame()->get_clientSize()->width;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScreenBase_obj,get_width,return )

int ScreenBase_obj::get_height(){
            	HX_STACKFRAME(&_hx_pos_6f99d968e31f22fe_31_get_height)
HXDLIN(  31)		return this->get_frame()->get_clientSize()->height;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScreenBase_obj,get_height,return )

Float ScreenBase_obj::get_dpi(){
            	HX_STACKFRAME(&_hx_pos_6f99d968e31f22fe_36_get_dpi)
HXDLIN(  36)		return (int)72;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScreenBase_obj,get_dpi,return )

void ScreenBase_obj::addComponent( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_6f99d968e31f22fe_40_addComponent)
HXLINE(  41)		this->_hx___topLevelComponents->push(component);
HXLINE(  42)		this->addResizeListener();
HXLINE(  43)		this->resizeComponent(component);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScreenBase_obj,addComponent,(void))

void ScreenBase_obj::removeComponent( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_6f99d968e31f22fe_46_removeComponent)
HXLINE(  47)		this->_hx___topLevelComponents->remove(component);
HXLINE(  48)		component->window->destroy();
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScreenBase_obj,removeComponent,(void))

 ::haxe::ui::containers::dialogs::Dialog ScreenBase_obj::messageDialog(::String message,::String title, ::Dynamic options, ::Dynamic callback){
            	HX_GC_STACKFRAME(&_hx_pos_6f99d968e31f22fe_55_messageDialog)
HXLINE(  56)		 ::haxe::ui::containers::dialogs::DialogOptions dialogOptions = ::haxe::ui::core::Screen_obj::createDialogOptions(options);
HXLINE(  57)		int dialogStyle = (int)0;
HXLINE(  58)		{
HXLINE(  58)			int _g = (int)0;
HXDLIN(  58)			::Array< ::Dynamic> _g1 = dialogOptions->buttons;
HXDLIN(  58)			while((_g < _g1->length)){
HXLINE(  58)				 ::haxe::ui::containers::dialogs::DialogButton b = _g1->__get(_g).StaticCast<  ::haxe::ui::containers::dialogs::DialogButton >();
HXDLIN(  58)				_g = (_g + (int)1);
HXLINE(  59)				::String b1 = b->id;
HXDLIN(  59)				if ((b1 == (HX_("",00,00,00,00) + (int)1))) {
HXLINE(  60)					dialogStyle = ((int)dialogStyle | (int)::wx::widgets::Defs_obj::OK);
            				}
            				else {
HXLINE(  61)					::String b2 = b->id;
HXDLIN(  61)					if ((b2 == (HX_("",00,00,00,00) + (int)2))) {
HXLINE(  62)						dialogStyle = ((int)dialogStyle | (int)::wx::widgets::Defs_obj::CANCEL);
            					}
            					else {
HXLINE(  63)						::String b3 = b->id;
HXDLIN(  63)						if ((b3 == (HX_("",00,00,00,00) + (int)4))) {
HXLINE(  64)							dialogStyle = ((int)dialogStyle | (int)::wx::widgets::Defs_obj::CLOSE);
            						}
            						else {
HXLINE(  65)							::String b4 = b->id;
HXDLIN(  65)							if ((b4 == (HX_("",00,00,00,00) + (int)8))) {
HXLINE(  66)								dialogStyle = ((int)dialogStyle | (int)::wx::widgets::Defs_obj::OK);
            							}
            							else {
HXLINE(  67)								::String b5 = b->id;
HXDLIN(  67)								if ((b5 == (HX_("",00,00,00,00) + (int)16))) {
HXLINE(  68)									dialogStyle = ((int)dialogStyle | (int)::wx::widgets::Defs_obj::_hx_YES);
            								}
            								else {
HXLINE(  69)									::String b6 = b->id;
HXDLIN(  69)									if ((b6 == (HX_("",00,00,00,00) + (int)32))) {
HXLINE(  70)										dialogStyle = ((int)dialogStyle | (int)::wx::widgets::Defs_obj::_hx_NO);
            									}
            								}
            							}
            						}
            					}
            				}
            			}
            		}
HXLINE(  74)		if ((dialogOptions->icon == (int)256)) {
HXLINE(  75)			dialogStyle = ((int)dialogStyle | (int)::wx::widgets::styles::MessageDialogStyle_obj::ICON_ERROR);
            		}
            		else {
HXLINE(  76)			if ((dialogOptions->icon == (int)512)) {
HXLINE(  77)				dialogStyle = ((int)dialogStyle | (int)::wx::widgets::styles::MessageDialogStyle_obj::ICON_INFORMATION);
            			}
            			else {
HXLINE(  78)				if ((dialogOptions->icon == (int)1024)) {
HXLINE(  79)					dialogStyle = ((int)dialogStyle | (int)::wx::widgets::styles::MessageDialogStyle_obj::ICON_WARNING);
            				}
            				else {
HXLINE(  80)					if ((dialogOptions->icon == (int)2048)) {
HXLINE(  81)						dialogStyle = ((int)dialogStyle | (int)::wx::widgets::styles::MessageDialogStyle_obj::ICON_QUESTION);
            					}
            				}
            			}
            		}
HXLINE(  84)		 ::hx::widgets::Frame messageDialog = this->get_frame();
HXDLIN(  84)		 ::hx::widgets::MessageDialog messageDialog1 =  ::hx::widgets::MessageDialog_obj::__alloc( HX_CTX ,messageDialog,message,title,((int)dialogStyle | (int)::wx::widgets::Defs_obj::CENTRE));
HXLINE(  85)		messageDialog1->showModal();
HXLINE(  86)		return  ::haxe::ui::containers::dialogs::Dialog_obj::__alloc( HX_CTX );
            	}


HX_DEFINE_DYNAMIC_FUNC4(ScreenBase_obj,messageDialog,return )

 ::haxe::ui::containers::dialogs::Dialog ScreenBase_obj::showDialog( ::haxe::ui::core::Component content, ::Dynamic options, ::Dynamic callback){
            	HX_GC_STACKFRAME(&_hx_pos_6f99d968e31f22fe_90_showDialog)
HXLINE(  91)		 ::haxe::ui::containers::dialogs::DialogOptions dialogOptions = ::haxe::ui::core::Screen_obj::createDialogOptions(options);
HXLINE(  96)		::haxe::Log_obj::trace(HX_("HERE!",31,f2,b3,a2),hx::SourceInfo(HX_("ScreenBase.hx",21,bd,e9,12),96,HX_("haxe.ui.backend.ScreenBase",69,73,9f,c7),HX_("showDialog",a5,a9,a7,1a)));
HXLINE(  97)		 ::haxe::ui::containers::dialogs::Dialog t =  ::haxe::ui::containers::dialogs::Dialog_obj::__alloc( HX_CTX );
HXLINE(  98)		t->callback = callback;
HXLINE(  99)		t->set_dialogOptions(dialogOptions);
HXLINE( 100)		t->addComponent(content);
HXLINE( 101)		::haxe::ui::core::Screen_obj::get_instance()->addComponent(t);
HXLINE( 102)		 ::hx::widgets::Dialog dlg = hx::TCast<  ::hx::widgets::Dialog >::cast(t->window);
HXLINE( 103)		dlg->centerOnParent();
HXLINE( 106)		dlg->showModal();
HXLINE( 107)		::haxe::Log_obj::trace(t->window,hx::SourceInfo(HX_("ScreenBase.hx",21,bd,e9,12),107,HX_("haxe.ui.backend.ScreenBase",69,73,9f,c7),HX_("showDialog",a5,a9,a7,1a)));
HXLINE( 109)		return  ::haxe::ui::containers::dialogs::Dialog_obj::__alloc( HX_CTX );
            	}


HX_DEFINE_DYNAMIC_FUNC3(ScreenBase_obj,showDialog,return )

bool ScreenBase_obj::hideDialog( ::haxe::ui::containers::dialogs::Dialog dialog){
            	HX_STACKFRAME(&_hx_pos_6f99d968e31f22fe_112_hideDialog)
HXLINE( 113)		 ::hx::widgets::Dialog dlg = hx::TCast<  ::hx::widgets::Dialog >::cast(dialog->window);
HXLINE( 114)		dlg->endModal((int)0);
HXLINE( 115)		return true;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScreenBase_obj,hideDialog,return )

void ScreenBase_obj::resizeComponent( ::haxe::ui::core::Component c){
            	HX_STACKFRAME(&_hx_pos_6f99d968e31f22fe_118_resizeComponent)
HXLINE( 120)		 ::Dynamic cx = null();
HXLINE( 121)		 ::Dynamic cy = null();
HXLINE( 123)		if (hx::IsGreater( c->get_percentWidth(),(int)0 )) {
HXLINE( 124)			Float cx1 = this->get_width();
HXDLIN( 124)			cx = ((Float)(cx1 * c->get_percentWidth()) / (Float)(int)100);
            		}
HXLINE( 126)		if (hx::IsGreater( c->get_percentHeight(),(int)0 )) {
HXLINE( 127)			Float cy1 = this->get_height();
HXDLIN( 127)			cy = ((Float)(cy1 * c->get_percentHeight()) / (Float)(int)100);
            		}
HXLINE( 135)		c->resizeComponent(cx,cy);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScreenBase_obj,resizeComponent,(void))

 ::hx::widgets::Frame ScreenBase_obj::get_frame(){
            	HX_STACKFRAME(&_hx_pos_6f99d968e31f22fe_144_get_frame)
HXLINE( 145)		bool _hx_tmp;
HXDLIN( 145)		if (hx::IsNotNull( this->options )) {
HXLINE( 145)			_hx_tmp = hx::IsNull(  ::Dynamic(this->options->__Field(HX_("frame",2d,78,83,06),hx::paccDynamic)) );
            		}
            		else {
HXLINE( 145)			_hx_tmp = true;
            		}
HXDLIN( 145)		if (_hx_tmp) {
HXLINE( 146)			return null();
            		}
HXLINE( 148)		return ( ( ::hx::widgets::Frame)(this->options->__Field(HX_("frame",2d,78,83,06),hx::paccDynamic)) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScreenBase_obj,get_frame,return )

::String ScreenBase_obj::get_title(){
            	HX_STACKFRAME(&_hx_pos_6f99d968e31f22fe_153_get_title)
HXDLIN( 153)		return this->get_frame()->get_title();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScreenBase_obj,get_title,return )

::String ScreenBase_obj::set_title(::String t){
            	HX_STACKFRAME(&_hx_pos_6f99d968e31f22fe_156_set_title)
HXDLIN( 156)		return this->get_frame()->set_title(t);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScreenBase_obj,set_title,return )

void ScreenBase_obj::addResizeListener(){
            		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_hx_Closure_0, ::haxe::ui::backend::ScreenBase,_gthis) HXARGC(1)
            		void _hx_run( ::hx::widgets::Event e){
            			HX_STACKFRAME(&_hx_pos_6f99d968e31f22fe_166_addResizeListener)
HXLINE( 166)			int _g = (int)0;
HXDLIN( 166)			::Array< ::Dynamic> _g1 = _gthis->_hx___topLevelComponents;
HXDLIN( 166)			while((_g < _g1->length)){
HXLINE( 166)				 ::haxe::ui::core::Component c = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 166)				_g = (_g + (int)1);
HXLINE( 167)				_gthis->resizeComponent(c);
            			}
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_STACKFRAME(&_hx_pos_6f99d968e31f22fe_160_addResizeListener)
HXDLIN( 160)		 ::haxe::ui::backend::ScreenBase _gthis = hx::ObjectPtr<OBJ_>(this);
HXLINE( 161)		bool _hx_tmp;
HXDLIN( 161)		if ((this->_hasListener != true)) {
HXLINE( 161)			_hx_tmp = hx::IsNull( this->get_frame() );
            		}
            		else {
HXLINE( 161)			_hx_tmp = true;
            		}
HXDLIN( 161)		if (_hx_tmp) {
HXLINE( 162)			return;
            		}
HXLINE( 165)		this->get_frame()->bind(::wx::widgets::EventType_obj::SIZE, ::Dynamic(new _hx_Closure_0(_gthis)),null());
HXLINE( 180)		this->_hasListener = true;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScreenBase_obj,addResizeListener,(void))

void ScreenBase_obj::handleSetComponentIndex( ::haxe::ui::core::Component child,int index){
            	HX_STACKFRAME(&_hx_pos_6f99d968e31f22fe_183_handleSetComponentIndex)
            	}


HX_DEFINE_DYNAMIC_FUNC2(ScreenBase_obj,handleSetComponentIndex,(void))

bool ScreenBase_obj::supportsEvent(::String type){
            	HX_STACKFRAME(&_hx_pos_6f99d968e31f22fe_191_supportsEvent)
HXDLIN( 191)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScreenBase_obj,supportsEvent,return )

void ScreenBase_obj::mapEvent(::String type, ::Dynamic listener){
            	HX_STACKFRAME(&_hx_pos_6f99d968e31f22fe_194_mapEvent)
            	}


HX_DEFINE_DYNAMIC_FUNC2(ScreenBase_obj,mapEvent,(void))

void ScreenBase_obj::unmapEvent(::String type, ::Dynamic listener){
            	HX_STACKFRAME(&_hx_pos_6f99d968e31f22fe_197_unmapEvent)
            	}


HX_DEFINE_DYNAMIC_FUNC2(ScreenBase_obj,unmapEvent,(void))


hx::ObjectPtr< ScreenBase_obj > ScreenBase_obj::__new() {
	hx::ObjectPtr< ScreenBase_obj > __this = new ScreenBase_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< ScreenBase_obj > ScreenBase_obj::__alloc(hx::Ctx *_hx_ctx) {
	ScreenBase_obj *__this = (ScreenBase_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ScreenBase_obj), true, "haxe.ui.backend.ScreenBase"));
	*(void **)__this = ScreenBase_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ScreenBase_obj::ScreenBase_obj()
{
}

void ScreenBase_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ScreenBase);
	HX_MARK_MEMBER_NAME(focus,"focus");
	HX_MARK_MEMBER_NAME(options,"options");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(dpi,"dpi");
	HX_MARK_MEMBER_NAME(_hx___topLevelComponents,"__topLevelComponents");
	HX_MARK_MEMBER_NAME(frame,"frame");
	HX_MARK_MEMBER_NAME(_hasListener,"_hasListener");
	HX_MARK_END_CLASS();
}

void ScreenBase_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(focus,"focus");
	HX_VISIT_MEMBER_NAME(options,"options");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(dpi,"dpi");
	HX_VISIT_MEMBER_NAME(_hx___topLevelComponents,"__topLevelComponents");
	HX_VISIT_MEMBER_NAME(frame,"frame");
	HX_VISIT_MEMBER_NAME(_hasListener,"_hasListener");
}

hx::Val ScreenBase_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"dpi") ) { return hx::Val( inCallProp == hx::paccAlways ? get_dpi() : dpi ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"focus") ) { return hx::Val( focus ); }
		if (HX_FIELD_EQ(inName,"width") ) { return hx::Val( inCallProp == hx::paccAlways ? get_width() : width ); }
		if (HX_FIELD_EQ(inName,"frame") ) { return hx::Val( inCallProp == hx::paccAlways ? get_frame() : frame ); }
		if (HX_FIELD_EQ(inName,"title") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_title() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return hx::Val( inCallProp == hx::paccAlways ? get_height() : height ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"options") ) { return hx::Val( options ); }
		if (HX_FIELD_EQ(inName,"get_dpi") ) { return hx::Val( get_dpi_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"mapEvent") ) { return hx::Val( mapEvent_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_width") ) { return hx::Val( get_width_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_frame") ) { return hx::Val( get_frame_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_title") ) { return hx::Val( get_title_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_title") ) { return hx::Val( set_title_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_height") ) { return hx::Val( get_height_dyn() ); }
		if (HX_FIELD_EQ(inName,"showDialog") ) { return hx::Val( showDialog_dyn() ); }
		if (HX_FIELD_EQ(inName,"hideDialog") ) { return hx::Val( hideDialog_dyn() ); }
		if (HX_FIELD_EQ(inName,"unmapEvent") ) { return hx::Val( unmapEvent_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"addComponent") ) { return hx::Val( addComponent_dyn() ); }
		if (HX_FIELD_EQ(inName,"_hasListener") ) { return hx::Val( _hasListener ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"messageDialog") ) { return hx::Val( messageDialog_dyn() ); }
		if (HX_FIELD_EQ(inName,"supportsEvent") ) { return hx::Val( supportsEvent_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"removeComponent") ) { return hx::Val( removeComponent_dyn() ); }
		if (HX_FIELD_EQ(inName,"resizeComponent") ) { return hx::Val( resizeComponent_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"addResizeListener") ) { return hx::Val( addResizeListener_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"__topLevelComponents") ) { return hx::Val( _hx___topLevelComponents ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"handleSetComponentIndex") ) { return hx::Val( handleSetComponentIndex_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val ScreenBase_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"dpi") ) { dpi=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"focus") ) { focus=inValue.Cast<  ::haxe::ui::core::Component >(); return inValue; }
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"frame") ) { frame=inValue.Cast<  ::hx::widgets::Frame >(); return inValue; }
		if (HX_FIELD_EQ(inName,"title") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_title(inValue.Cast< ::String >()) ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"options") ) { options=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_hasListener") ) { _hasListener=inValue.Cast< bool >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"__topLevelComponents") ) { _hx___topLevelComponents=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ScreenBase_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("focus","\xd8","\x5f","\x89","\x04"));
	outFields->push(HX_HCSTRING("options","\x5e","\x33","\xfe","\xdf"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("dpi","\x5d","\x43","\x4c","\x00"));
	outFields->push(HX_HCSTRING("__topLevelComponents","\xc5","\x47","\x40","\xf0"));
	outFields->push(HX_HCSTRING("frame","\x2d","\x78","\x83","\x06"));
	outFields->push(HX_HCSTRING("title","\x98","\x15","\x3b","\x10"));
	outFields->push(HX_HCSTRING("_hasListener","\xef","\x93","\xf2","\x70"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo ScreenBase_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ui::core::Component*/ ,(int)offsetof(ScreenBase_obj,focus),HX_HCSTRING("focus","\xd8","\x5f","\x89","\x04")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ScreenBase_obj,options),HX_HCSTRING("options","\x5e","\x33","\xfe","\xdf")},
	{hx::fsFloat,(int)offsetof(ScreenBase_obj,width),HX_HCSTRING("width","\x06","\xb6","\x62","\xca")},
	{hx::fsFloat,(int)offsetof(ScreenBase_obj,height),HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")},
	{hx::fsFloat,(int)offsetof(ScreenBase_obj,dpi),HX_HCSTRING("dpi","\x5d","\x43","\x4c","\x00")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(ScreenBase_obj,_hx___topLevelComponents),HX_HCSTRING("__topLevelComponents","\xc5","\x47","\x40","\xf0")},
	{hx::fsObject /*::hx::widgets::Frame*/ ,(int)offsetof(ScreenBase_obj,frame),HX_HCSTRING("frame","\x2d","\x78","\x83","\x06")},
	{hx::fsBool,(int)offsetof(ScreenBase_obj,_hasListener),HX_HCSTRING("_hasListener","\xef","\x93","\xf2","\x70")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *ScreenBase_obj_sStaticStorageInfo = 0;
#endif

static ::String ScreenBase_obj_sMemberFields[] = {
	HX_HCSTRING("focus","\xd8","\x5f","\x89","\x04"),
	HX_HCSTRING("options","\x5e","\x33","\xfe","\xdf"),
	HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),
	HX_HCSTRING("get_width","\x5d","\x12","\x0c","\x0e"),
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("get_height","\xb0","\x77","\xd3","\xf2"),
	HX_HCSTRING("dpi","\x5d","\x43","\x4c","\x00"),
	HX_HCSTRING("get_dpi","\xf4","\x0b","\xc1","\x26"),
	HX_HCSTRING("__topLevelComponents","\xc5","\x47","\x40","\xf0"),
	HX_HCSTRING("addComponent","\x5c","\x12","\xa8","\x0e"),
	HX_HCSTRING("removeComponent","\xd9","\x8b","\x72","\x50"),
	HX_HCSTRING("messageDialog","\xef","\xbd","\x5d","\x27"),
	HX_HCSTRING("showDialog","\xa5","\xa9","\xa7","\x1a"),
	HX_HCSTRING("hideDialog","\x2a","\xab","\xb8","\x48"),
	HX_HCSTRING("resizeComponent","\x29","\x98","\xf2","\x6b"),
	HX_HCSTRING("frame","\x2d","\x78","\x83","\x06"),
	HX_HCSTRING("get_frame","\x84","\xd4","\x2c","\x4a"),
	HX_HCSTRING("get_title","\xef","\x71","\xe4","\x53"),
	HX_HCSTRING("set_title","\xfb","\x5d","\x35","\x37"),
	HX_HCSTRING("_hasListener","\xef","\x93","\xf2","\x70"),
	HX_HCSTRING("addResizeListener","\x89","\xc8","\xca","\xd2"),
	HX_HCSTRING("handleSetComponentIndex","\x8f","\x73","\xb6","\xf4"),
	HX_HCSTRING("supportsEvent","\xf6","\xb7","\xb2","\xae"),
	HX_HCSTRING("mapEvent","\xde","\x37","\x07","\xed"),
	HX_HCSTRING("unmapEvent","\x37","\x1f","\xcb","\x72"),
	::String(null()) };

static void ScreenBase_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ScreenBase_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ScreenBase_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ScreenBase_obj::__mClass,"__mClass");
};

#endif

hx::Class ScreenBase_obj::__mClass;

void ScreenBase_obj::__register()
{
	hx::Object *dummy = new ScreenBase_obj;
	ScreenBase_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.backend.ScreenBase","\x69","\x73","\x9f","\xc7");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ScreenBase_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ScreenBase_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ScreenBase_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ScreenBase_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ScreenBase_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ScreenBase_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
