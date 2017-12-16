// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_IntIterator
#include <IntIterator.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_38f1b201f6b11cab_46_new,"IntIterator","new",0x5692054f,"IntIterator.new","/usr/share/haxe/std/IntIterator.hx",46,0x062523fc)
HX_LOCAL_STACK_FRAME(_hx_pos_38f1b201f6b11cab_55_hasNext,"IntIterator","hasNext",0xd8737ddc,"IntIterator.hasNext","/usr/share/haxe/std/IntIterator.hx",55,0x062523fc)
HX_LOCAL_STACK_FRAME(_hx_pos_38f1b201f6b11cab_64_next,"IntIterator","next",0x6932a124,"IntIterator.next","/usr/share/haxe/std/IntIterator.hx",64,0x062523fc)

void IntIterator_obj::__construct(int min,int max){
            	HX_STACKFRAME(&_hx_pos_38f1b201f6b11cab_46_new)
HXLINE(  47)		this->min = min;
HXLINE(  48)		this->max = max;
            	}

Dynamic IntIterator_obj::__CreateEmpty() { return new IntIterator_obj; }

void *IntIterator_obj::_hx_vtable = 0;

Dynamic IntIterator_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< IntIterator_obj > _hx_result = new IntIterator_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool IntIterator_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x621bb1dd;
}

bool IntIterator_obj::hasNext(){
            	HX_STACKFRAME(&_hx_pos_38f1b201f6b11cab_55_hasNext)
HXDLIN(  55)		return (this->min < this->max);
            	}


HX_DEFINE_DYNAMIC_FUNC0(IntIterator_obj,hasNext,return )

int IntIterator_obj::next(){
            	HX_STACKFRAME(&_hx_pos_38f1b201f6b11cab_64_next)
HXDLIN(  64)		return this->min++;
            	}


HX_DEFINE_DYNAMIC_FUNC0(IntIterator_obj,next,return )


IntIterator_obj::IntIterator_obj()
{
}

hx::Val IntIterator_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"min") ) { return hx::Val( min ); }
		if (HX_FIELD_EQ(inName,"max") ) { return hx::Val( max ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { return hx::Val( next_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"hasNext") ) { return hx::Val( hasNext_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val IntIterator_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"min") ) { min=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"max") ) { max=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void IntIterator_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("min","\x92","\x11","\x53","\x00"));
	outFields->push(HX_HCSTRING("max","\xa4","\x0a","\x53","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo IntIterator_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(IntIterator_obj,min),HX_HCSTRING("min","\x92","\x11","\x53","\x00")},
	{hx::fsInt,(int)offsetof(IntIterator_obj,max),HX_HCSTRING("max","\xa4","\x0a","\x53","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *IntIterator_obj_sStaticStorageInfo = 0;
#endif

static ::String IntIterator_obj_sMemberFields[] = {
	HX_HCSTRING("min","\x92","\x11","\x53","\x00"),
	HX_HCSTRING("max","\xa4","\x0a","\x53","\x00"),
	HX_HCSTRING("hasNext","\x6d","\xa5","\x46","\x18"),
	HX_HCSTRING("next","\xf3","\x84","\x02","\x49"),
	::String(null()) };

static void IntIterator_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IntIterator_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void IntIterator_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IntIterator_obj::__mClass,"__mClass");
};

#endif

hx::Class IntIterator_obj::__mClass;

void IntIterator_obj::__register()
{
	hx::Object *dummy = new IntIterator_obj;
	IntIterator_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("IntIterator","\xdd","\xb1","\x1b","\x62");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = IntIterator_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(IntIterator_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< IntIterator_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = IntIterator_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = IntIterator_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = IntIterator_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

