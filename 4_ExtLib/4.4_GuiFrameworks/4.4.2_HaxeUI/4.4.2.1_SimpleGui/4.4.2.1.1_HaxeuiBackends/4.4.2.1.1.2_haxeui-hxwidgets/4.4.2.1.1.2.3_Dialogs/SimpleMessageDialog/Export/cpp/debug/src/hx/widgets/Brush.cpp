// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_cd1f455405216f23
#define INCLUDED_cd1f455405216f23
#include "wx/brush.h"
#endif
#ifndef INCLUDED_e4d5646cda5915ba
#define INCLUDED_e4d5646cda5915ba
#include "wx/colour.h"
#endif
#ifndef INCLUDED_eb4c1394ce7c5dd4
#define INCLUDED_eb4c1394ce7c5dd4
#include "wx/object.h"
#endif
#ifndef INCLUDED_hx_widgets_Brush
#include <hx/widgets/Brush.h>
#endif
#ifndef INCLUDED_hx_widgets_GDIObject
#include <hx/widgets/GDIObject.h>
#endif
#ifndef INCLUDED_hx_widgets_Object
#include <hx/widgets/Object.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_c76c21b4ead3757d_9_new,"hx.widgets.Brush","new",0xf588406f,"hx.widgets.Brush.new","hx/widgets/Brush.hx",9,0x7e071ce3)
HX_LOCAL_STACK_FRAME(_hx_pos_c76c21b4ead3757d_19_get_colour,"hx.widgets.Brush","get_colour",0xfc3c77e6,"hx.widgets.Brush.get_colour","hx/widgets/Brush.hx",19,0x7e071ce3)
HX_LOCAL_STACK_FRAME(_hx_pos_c76c21b4ead3757d_22_set_colour,"hx.widgets.Brush","set_colour",0xffba165a,"hx.widgets.Brush.set_colour","hx/widgets/Brush.hx",22,0x7e071ce3)
HX_LOCAL_STACK_FRAME(_hx_pos_c76c21b4ead3757d_34_get_brushRef,"hx.widgets.Brush","get_brushRef",0xffe58b13,"hx.widgets.Brush.get_brushRef","hx/widgets/Brush.hx",34,0x7e071ce3)
namespace hx{
namespace widgets{

void Brush_obj::__construct(hx::Null< int >  __o_colour){
int colour = __o_colour.Default(0);
            	HX_STACKFRAME(&_hx_pos_c76c21b4ead3757d_9_new)
HXLINE(  10)		this->_ref = ::cpp::Pointer_obj::fromRaw((new wxBrush()))->reinterpret();
HXLINE(  11)		this->set_colour(colour);
            	}

Dynamic Brush_obj::__CreateEmpty() { return new Brush_obj; }

void *Brush_obj::_hx_vtable = 0;

Dynamic Brush_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Brush_obj > _hx_result = new Brush_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Brush_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x6cbbf31b) {
		if (inClassId<=(int)0x03ecca10) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x03ecca10;
		} else {
			return inClassId==(int)0x6cbbf31b;
		}
	} else {
		return inClassId==(int)0x7f575436;
	}
}

int Brush_obj::get_colour(){
            	HX_STACKFRAME(&_hx_pos_c76c21b4ead3757d_19_get_colour)
HXDLIN(  19)		return this->get_brushRef()->ptr->GetColour().GetRGB();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Brush_obj,get_colour,return )

int Brush_obj::set_colour(int value){
            	HX_STACKFRAME(&_hx_pos_c76c21b4ead3757d_22_set_colour)
HXLINE(  23)		::cpp::Pointer<  wxColour > temp = ::cpp::Pointer_obj::fromRaw((new wxColour(((int)((int)((int)((int)value & (int)(int)255) << (int)(int)16) | (int)((int)value & (int)(int)65280)) | (int)((int)((int)value & (int)(int)16711680) >> (int)(int)16)))));
HXLINE(  24)		 wxBrush * _hx_tmp = this->get_brushRef()->ptr;
HXDLIN(  24)		(*(_hx_tmp)).SetColour(temp->get_ref());
HXLINE(  25)		temp->destroy();
HXLINE(  26)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Brush_obj,set_colour,return )

::cpp::Pointer<  wxBrush > Brush_obj::get_brushRef(){
            	HX_STACKFRAME(&_hx_pos_c76c21b4ead3757d_34_get_brushRef)
HXDLIN(  34)		return this->_ref->reinterpret();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Brush_obj,get_brushRef,return )


hx::ObjectPtr< Brush_obj > Brush_obj::__new(hx::Null< int >  __o_colour) {
	hx::ObjectPtr< Brush_obj > __this = new Brush_obj();
	__this->__construct(__o_colour);
	return __this;
}

hx::ObjectPtr< Brush_obj > Brush_obj::__alloc(hx::Ctx *_hx_ctx,hx::Null< int >  __o_colour) {
	Brush_obj *__this = (Brush_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Brush_obj), true, "hx.widgets.Brush"));
	*(void **)__this = Brush_obj::_hx_vtable;
	__this->__construct(__o_colour);
	return __this;
}

Brush_obj::Brush_obj()
{
}

void Brush_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Brush);
	HX_MARK_MEMBER_NAME(brushRef,"brushRef");
	 ::hx::widgets::Object_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Brush_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(brushRef,"brushRef");
	 ::hx::widgets::Object_obj::__Visit(HX_VISIT_ARG);
}

hx::Val Brush_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"colour") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_colour() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"brushRef") ) { return hx::Val( inCallProp == hx::paccAlways ? get_brushRef() : brushRef ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_colour") ) { return hx::Val( get_colour_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_colour") ) { return hx::Val( set_colour_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_brushRef") ) { return hx::Val( get_brushRef_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Brush_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"colour") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_colour(inValue.Cast< int >()) ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"brushRef") ) { brushRef=inValue.Cast< ::cpp::Pointer<  wxBrush > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Brush_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("colour","\x4c","\xc8","\x86","\xc6"));
	outFields->push(HX_HCSTRING("brushRef","\xf9","\x40","\xb1","\xad"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Brush_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::cpp::Pointer< wxBrush >*/ ,(int)offsetof(Brush_obj,brushRef),HX_HCSTRING("brushRef","\xf9","\x40","\xb1","\xad")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Brush_obj_sStaticStorageInfo = 0;
#endif

static ::String Brush_obj_sMemberFields[] = {
	HX_HCSTRING("get_colour","\x15","\x38","\x0e","\xb7"),
	HX_HCSTRING("set_colour","\x89","\xd6","\x8b","\xba"),
	HX_HCSTRING("brushRef","\xf9","\x40","\xb1","\xad"),
	HX_HCSTRING("get_brushRef","\x02","\xf5","\xca","\x62"),
	::String(null()) };

static void Brush_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Brush_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Brush_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Brush_obj::__mClass,"__mClass");
};

#endif

hx::Class Brush_obj::__mClass;

void Brush_obj::__register()
{
	hx::Object *dummy = new Brush_obj;
	Brush_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("hx.widgets.Brush","\xfd","\xdc","\x4d","\x58");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Brush_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Brush_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Brush_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Brush_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Brush_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Brush_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
