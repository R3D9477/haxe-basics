// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_hxwidgets_custom_TransparentStaticBitmap
#include <haxe/ui/backend/hxwidgets/custom/TransparentStaticBitmap.h>
#endif
#ifndef INCLUDED_hx_widgets_Bitmap
#include <hx/widgets/Bitmap.h>
#endif
#ifndef INCLUDED_hx_widgets_Control
#include <hx/widgets/Control.h>
#endif
#ifndef INCLUDED_hx_widgets_Event
#include <hx/widgets/Event.h>
#endif
#ifndef INCLUDED_hx_widgets_EvtHandler
#include <hx/widgets/EvtHandler.h>
#endif
#ifndef INCLUDED_hx_widgets_GDIObject
#include <hx/widgets/GDIObject.h>
#endif
#ifndef INCLUDED_hx_widgets_Object
#include <hx/widgets/Object.h>
#endif
#ifndef INCLUDED_hx_widgets_StaticBitmap
#include <hx/widgets/StaticBitmap.h>
#endif
#ifndef INCLUDED_hx_widgets_Trackable
#include <hx/widgets/Trackable.h>
#endif
#ifndef INCLUDED_hx_widgets_Window
#include <hx/widgets/Window.h>
#endif
#ifndef INCLUDED_wx_widgets_EventType
#include <wx/widgets/EventType.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_77ae9d7e6f4ad5ac_9_new,"haxe.ui.backend.hxwidgets.custom.TransparentStaticBitmap","new",0xb910de5f,"haxe.ui.backend.hxwidgets.custom.TransparentStaticBitmap.new","haxe/ui/backend/hxwidgets/custom/TransparentStaticBitmap.hx",9,0x4be32310)
HX_LOCAL_STACK_FRAME(_hx_pos_77ae9d7e6f4ad5ac_19_bind,"haxe.ui.backend.hxwidgets.custom.TransparentStaticBitmap","bind",0x2dc626de,"haxe.ui.backend.hxwidgets.custom.TransparentStaticBitmap.bind","haxe/ui/backend/hxwidgets/custom/TransparentStaticBitmap.hx",19,0x4be32310)
HX_LOCAL_STACK_FRAME(_hx_pos_77ae9d7e6f4ad5ac_32_doNothing,"haxe.ui.backend.hxwidgets.custom.TransparentStaticBitmap","doNothing",0xb7435b01,"haxe.ui.backend.hxwidgets.custom.TransparentStaticBitmap.doNothing","haxe/ui/backend/hxwidgets/custom/TransparentStaticBitmap.hx",32,0x4be32310)
namespace haxe{
namespace ui{
namespace backend{
namespace hxwidgets{
namespace custom{

void TransparentStaticBitmap_obj::__construct( ::hx::widgets::Window parent, ::hx::widgets::Bitmap bitmap,hx::Null< int >  __o_id){
int id = __o_id.Default(-1);
            	HX_STACKFRAME(&_hx_pos_77ae9d7e6f4ad5ac_9_new)
HXLINE(  11)		this->_hasUp = true;
HXLINE(  10)		this->_hasDown = true;
HXLINE(  14)		super::__construct(parent,bitmap,id);
HXLINE(  15)		this->super::bind(::wx::widgets::EventType_obj::LEFT_DOWN,this->doNothing_dyn(),null());
HXLINE(  16)		this->super::bind(::wx::widgets::EventType_obj::LEFT_UP,this->doNothing_dyn(),null());
            	}

Dynamic TransparentStaticBitmap_obj::__CreateEmpty() { return new TransparentStaticBitmap_obj; }

void *TransparentStaticBitmap_obj::_hx_vtable = 0;

Dynamic TransparentStaticBitmap_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< TransparentStaticBitmap_obj > _hx_result = new TransparentStaticBitmap_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool TransparentStaticBitmap_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x604dbaa2) {
		if (inClassId<=(int)0x350d7ce6) {
			if (inClassId<=(int)0x11a283d9) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x11a283d9;
			} else {
				return inClassId==(int)0x350d7ce6;
			}
		} else {
			return inClassId==(int)0x604dbaa2;
		}
	} else {
		if (inClassId<=(int)0x7f575436) {
			return inClassId==(int)0x6d554dd8 || inClassId==(int)0x7f575436;
		} else {
			return inClassId==(int)0x7f8f9123;
		}
	}
}

void TransparentStaticBitmap_obj::bind(int event, ::Dynamic fn,hx::Null< int >  __o_id){
int id = __o_id.Default(-1);
            	HX_STACKFRAME(&_hx_pos_77ae9d7e6f4ad5ac_19_bind)
HXLINE(  20)		bool _hx_tmp;
HXDLIN(  20)		if ((event == ::wx::widgets::EventType_obj::LEFT_DOWN)) {
HXLINE(  20)			_hx_tmp = (this->_hasDown == true);
            		}
            		else {
HXLINE(  20)			_hx_tmp = false;
            		}
HXDLIN(  20)		if (_hx_tmp) {
HXLINE(  21)			this->super::unbind(::wx::widgets::EventType_obj::LEFT_DOWN,this->doNothing_dyn(),null());
HXLINE(  22)			this->_hasDown = false;
            		}
HXLINE(  24)		bool _hx_tmp1;
HXDLIN(  24)		if ((event == ::wx::widgets::EventType_obj::LEFT_UP)) {
HXLINE(  24)			_hx_tmp1 = (this->_hasUp == true);
            		}
            		else {
HXLINE(  24)			_hx_tmp1 = false;
            		}
HXDLIN(  24)		if (_hx_tmp1) {
HXLINE(  25)			this->super::unbind(::wx::widgets::EventType_obj::LEFT_UP,this->doNothing_dyn(),null());
HXLINE(  26)			this->_hasUp = false;
            		}
HXLINE(  29)		this->super::bind(event,fn,id);
            	}


void TransparentStaticBitmap_obj::doNothing( ::hx::widgets::Event e){
            	HX_STACKFRAME(&_hx_pos_77ae9d7e6f4ad5ac_32_doNothing)
            	}


HX_DEFINE_DYNAMIC_FUNC1(TransparentStaticBitmap_obj,doNothing,(void))


hx::ObjectPtr< TransparentStaticBitmap_obj > TransparentStaticBitmap_obj::__new( ::hx::widgets::Window parent, ::hx::widgets::Bitmap bitmap,hx::Null< int >  __o_id) {
	hx::ObjectPtr< TransparentStaticBitmap_obj > __this = new TransparentStaticBitmap_obj();
	__this->__construct(parent,bitmap,__o_id);
	return __this;
}

hx::ObjectPtr< TransparentStaticBitmap_obj > TransparentStaticBitmap_obj::__alloc(hx::Ctx *_hx_ctx, ::hx::widgets::Window parent, ::hx::widgets::Bitmap bitmap,hx::Null< int >  __o_id) {
	TransparentStaticBitmap_obj *__this = (TransparentStaticBitmap_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(TransparentStaticBitmap_obj), true, "haxe.ui.backend.hxwidgets.custom.TransparentStaticBitmap"));
	*(void **)__this = TransparentStaticBitmap_obj::_hx_vtable;
	__this->__construct(parent,bitmap,__o_id);
	return __this;
}

TransparentStaticBitmap_obj::TransparentStaticBitmap_obj()
{
}

hx::Val TransparentStaticBitmap_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"bind") ) { return hx::Val( bind_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_hasUp") ) { return hx::Val( _hasUp ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_hasDown") ) { return hx::Val( _hasDown ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"doNothing") ) { return hx::Val( doNothing_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val TransparentStaticBitmap_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_hasUp") ) { _hasUp=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_hasDown") ) { _hasDown=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TransparentStaticBitmap_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_hasDown","\x5d","\x72","\x6a","\x4b"));
	outFields->push(HX_HCSTRING("_hasUp","\x96","\xdb","\x08","\x1e"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo TransparentStaticBitmap_obj_sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(TransparentStaticBitmap_obj,_hasDown),HX_HCSTRING("_hasDown","\x5d","\x72","\x6a","\x4b")},
	{hx::fsBool,(int)offsetof(TransparentStaticBitmap_obj,_hasUp),HX_HCSTRING("_hasUp","\x96","\xdb","\x08","\x1e")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *TransparentStaticBitmap_obj_sStaticStorageInfo = 0;
#endif

static ::String TransparentStaticBitmap_obj_sMemberFields[] = {
	HX_HCSTRING("_hasDown","\x5d","\x72","\x6a","\x4b"),
	HX_HCSTRING("_hasUp","\x96","\xdb","\x08","\x1e"),
	HX_HCSTRING("bind","\xbd","\xf5","\x16","\x41"),
	HX_HCSTRING("doNothing","\xc2","\x43","\xdd","\x4f"),
	::String(null()) };

static void TransparentStaticBitmap_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TransparentStaticBitmap_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void TransparentStaticBitmap_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TransparentStaticBitmap_obj::__mClass,"__mClass");
};

#endif

hx::Class TransparentStaticBitmap_obj::__mClass;

void TransparentStaticBitmap_obj::__register()
{
	hx::Object *dummy = new TransparentStaticBitmap_obj;
	TransparentStaticBitmap_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.backend.hxwidgets.custom.TransparentStaticBitmap","\xed","\xc2","\xd4","\xed");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = TransparentStaticBitmap_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(TransparentStaticBitmap_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TransparentStaticBitmap_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = TransparentStaticBitmap_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TransparentStaticBitmap_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TransparentStaticBitmap_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
} // end namespace hxwidgets
} // end namespace custom
