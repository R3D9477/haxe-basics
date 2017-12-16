// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_ui_util_FunctionArray
#include <haxe/ui/util/FunctionArray.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_5cdf254a4f2dae08_7_new,"haxe.ui.util.FunctionArray","new",0x69d91dd9,"haxe.ui.util.FunctionArray.new","haxe/ui/util/FunctionArray.hx",7,0xc0b07718)
HX_LOCAL_STACK_FRAME(_hx_pos_5cdf254a4f2dae08_15_get,"haxe.ui.util.FunctionArray","get",0x69d3ce0f,"haxe.ui.util.FunctionArray.get","haxe/ui/util/FunctionArray.hx",15,0xc0b07718)
HX_LOCAL_STACK_FRAME(_hx_pos_5cdf254a4f2dae08_20_get_length,"haxe.ui.util.FunctionArray","get_length",0xc5d54856,"haxe.ui.util.FunctionArray.get_length","haxe/ui/util/FunctionArray.hx",20,0xc0b07718)
HX_LOCAL_STACK_FRAME(_hx_pos_5cdf254a4f2dae08_24_push,"haxe.ui.util.FunctionArray","push",0x357f8e41,"haxe.ui.util.FunctionArray.push","haxe/ui/util/FunctionArray.hx",24,0xc0b07718)
HX_LOCAL_STACK_FRAME(_hx_pos_5cdf254a4f2dae08_28_pop,"haxe.ui.util.FunctionArray","pop",0x69daab0a,"haxe.ui.util.FunctionArray.pop","haxe/ui/util/FunctionArray.hx",28,0xc0b07718)
HX_LOCAL_STACK_FRAME(_hx_pos_5cdf254a4f2dae08_48_indexOf,"haxe.ui.util.FunctionArray","indexOf",0x76eb46c2,"haxe.ui.util.FunctionArray.indexOf","haxe/ui/util/FunctionArray.hx",48,0xc0b07718)
HX_LOCAL_STACK_FRAME(_hx_pos_5cdf254a4f2dae08_66_remove,"haxe.ui.util.FunctionArray","remove",0xd18c406b,"haxe.ui.util.FunctionArray.remove","haxe/ui/util/FunctionArray.hx",66,0xc0b07718)
HX_LOCAL_STACK_FRAME(_hx_pos_5cdf254a4f2dae08_71_contains,"haxe.ui.util.FunctionArray","contains",0xfccd9606,"haxe.ui.util.FunctionArray.contains","haxe/ui/util/FunctionArray.hx",71,0xc0b07718)
HX_LOCAL_STACK_FRAME(_hx_pos_5cdf254a4f2dae08_75_iterator,"haxe.ui.util.FunctionArray","iterator",0x63ec85d5,"haxe.ui.util.FunctionArray.iterator","haxe/ui/util/FunctionArray.hx",75,0xc0b07718)
HX_LOCAL_STACK_FRAME(_hx_pos_5cdf254a4f2dae08_79_copy,"haxe.ui.util.FunctionArray","copy",0x2ce3381c,"haxe.ui.util.FunctionArray.copy","haxe/ui/util/FunctionArray.hx",79,0xc0b07718)
HX_LOCAL_STACK_FRAME(_hx_pos_5cdf254a4f2dae08_82_toString,"haxe.ui.util.FunctionArray","toString",0x08c10c93,"haxe.ui.util.FunctionArray.toString","haxe/ui/util/FunctionArray.hx",82,0xc0b07718)
namespace haxe{
namespace ui{
namespace util{

void FunctionArray_obj::__construct(::cpp::VirtualArray array){
            	HX_STACKFRAME(&_hx_pos_5cdf254a4f2dae08_7_new)
HXDLIN(   7)		if (hx::IsNull( array )) {
HXLINE(   8)			this->_array = ::cpp::VirtualArray_obj::__new(0);
            		}
            		else {
HXLINE(  10)			this->_array = array;
            		}
            	}

Dynamic FunctionArray_obj::__CreateEmpty() { return new FunctionArray_obj; }

void *FunctionArray_obj::_hx_vtable = 0;

Dynamic FunctionArray_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< FunctionArray_obj > _hx_result = new FunctionArray_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool FunctionArray_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0a934cd9;
}

 ::Dynamic FunctionArray_obj::get(int index){
            	HX_STACKFRAME(&_hx_pos_5cdf254a4f2dae08_15_get)
HXDLIN(  15)		return this->_array->__get(index);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FunctionArray_obj,get,return )

int FunctionArray_obj::get_length(){
            	HX_STACKFRAME(&_hx_pos_5cdf254a4f2dae08_20_get_length)
HXDLIN(  20)		return this->_array->get_length();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FunctionArray_obj,get_length,return )

int FunctionArray_obj::push( ::Dynamic x){
            	HX_STACKFRAME(&_hx_pos_5cdf254a4f2dae08_24_push)
HXDLIN(  24)		return this->_array->push(x);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FunctionArray_obj,push,return )

 ::Dynamic FunctionArray_obj::pop(){
            	HX_STACKFRAME(&_hx_pos_5cdf254a4f2dae08_28_pop)
HXDLIN(  28)		return this->_array->pop();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FunctionArray_obj,pop,return )

int FunctionArray_obj::indexOf( ::Dynamic x,hx::Null< int >  __o_fromIndex){
int fromIndex = __o_fromIndex.Default(0);
            	HX_STACKFRAME(&_hx_pos_5cdf254a4f2dae08_48_indexOf)
HXDLIN(  48)		return this->_array->indexOf(x,fromIndex);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FunctionArray_obj,indexOf,return )

bool FunctionArray_obj::remove( ::Dynamic x){
            	HX_STACKFRAME(&_hx_pos_5cdf254a4f2dae08_66_remove)
HXDLIN(  66)		return this->_array->remove(x);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FunctionArray_obj,remove,return )

bool FunctionArray_obj::contains( ::Dynamic x){
            	HX_STACKFRAME(&_hx_pos_5cdf254a4f2dae08_71_contains)
HXDLIN(  71)		return (this->indexOf(x,null()) != (int)-1);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FunctionArray_obj,contains,return )

 ::Dynamic FunctionArray_obj::iterator(){
            	HX_STACKFRAME(&_hx_pos_5cdf254a4f2dae08_75_iterator)
HXDLIN(  75)		return this->_array->iterator();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FunctionArray_obj,iterator,return )

 ::haxe::ui::util::FunctionArray FunctionArray_obj::copy(){
            	HX_GC_STACKFRAME(&_hx_pos_5cdf254a4f2dae08_79_copy)
HXDLIN(  79)		return  ::haxe::ui::util::FunctionArray_obj::__alloc( HX_CTX ,this->_array->copy());
            	}


HX_DEFINE_DYNAMIC_FUNC0(FunctionArray_obj,copy,return )

::String FunctionArray_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_5cdf254a4f2dae08_82_toString)
HXLINE(  83)		::String s = HX_("[",5b,00,00,00);
HXLINE(  84)		 ::Dynamic iter = this->iterator();
HXLINE(  85)		while(( (bool)(iter->__Field(HX_("hasNext",6d,a5,46,18),hx::paccDynamic)()) )){
HXLINE(  86)			s = (s + ::Std_obj::string(iter->__Field(HX_("next",f3,84,02,49),hx::paccDynamic)()));
HXLINE(  87)			if (( (bool)(iter->__Field(HX_("hasNext",6d,a5,46,18),hx::paccDynamic)()) )) {
HXLINE(  88)				s = (s + HX_(", ",74,26,00,00));
            			}
            		}
HXLINE(  91)		s = (s + HX_("]",5d,00,00,00));
HXLINE(  92)		return s;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FunctionArray_obj,toString,return )


hx::ObjectPtr< FunctionArray_obj > FunctionArray_obj::__new(::cpp::VirtualArray array) {
	hx::ObjectPtr< FunctionArray_obj > __this = new FunctionArray_obj();
	__this->__construct(array);
	return __this;
}

hx::ObjectPtr< FunctionArray_obj > FunctionArray_obj::__alloc(hx::Ctx *_hx_ctx,::cpp::VirtualArray array) {
	FunctionArray_obj *__this = (FunctionArray_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(FunctionArray_obj), true, "haxe.ui.util.FunctionArray"));
	*(void **)__this = FunctionArray_obj::_hx_vtable;
	__this->__construct(array);
	return __this;
}

FunctionArray_obj::FunctionArray_obj()
{
}

void FunctionArray_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FunctionArray);
	HX_MARK_MEMBER_NAME(_array,"_array");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_END_CLASS();
}

void FunctionArray_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_array,"_array");
	HX_VISIT_MEMBER_NAME(length,"length");
}

hx::Val FunctionArray_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return hx::Val( get_dyn() ); }
		if (HX_FIELD_EQ(inName,"pop") ) { return hx::Val( pop_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"push") ) { return hx::Val( push_dyn() ); }
		if (HX_FIELD_EQ(inName,"copy") ) { return hx::Val( copy_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_array") ) { return hx::Val( _array ); }
		if (HX_FIELD_EQ(inName,"length") ) { return hx::Val( inCallProp == hx::paccAlways ? get_length() : length ); }
		if (HX_FIELD_EQ(inName,"remove") ) { return hx::Val( remove_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"indexOf") ) { return hx::Val( indexOf_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"contains") ) { return hx::Val( contains_dyn() ); }
		if (HX_FIELD_EQ(inName,"iterator") ) { return hx::Val( iterator_dyn() ); }
		if (HX_FIELD_EQ(inName,"toString") ) { return hx::Val( toString_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_length") ) { return hx::Val( get_length_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val FunctionArray_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_array") ) { _array=inValue.Cast< ::cpp::VirtualArray >(); return inValue; }
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FunctionArray_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_array","\xda","\xb4","\x76","\x21"));
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo FunctionArray_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(FunctionArray_obj,_array),HX_HCSTRING("_array","\xda","\xb4","\x76","\x21")},
	{hx::fsInt,(int)offsetof(FunctionArray_obj,length),HX_HCSTRING("length","\xe6","\x94","\x07","\x9f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *FunctionArray_obj_sStaticStorageInfo = 0;
#endif

static ::String FunctionArray_obj_sMemberFields[] = {
	HX_HCSTRING("_array","\xda","\xb4","\x76","\x21"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"),
	HX_HCSTRING("get_length","\xaf","\x04","\x8f","\x8f"),
	HX_HCSTRING("push","\xda","\x11","\x61","\x4a"),
	HX_HCSTRING("pop","\x91","\x5d","\x55","\x00"),
	HX_HCSTRING("indexOf","\xc9","\x48","\xbf","\xe0"),
	HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"),
	HX_HCSTRING("contains","\x1f","\x5a","\x7b","\x2c"),
	HX_HCSTRING("iterator","\xee","\x49","\x9a","\x93"),
	HX_HCSTRING("copy","\xb5","\xbb","\xc4","\x41"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void FunctionArray_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FunctionArray_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FunctionArray_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FunctionArray_obj::__mClass,"__mClass");
};

#endif

hx::Class FunctionArray_obj::__mClass;

void FunctionArray_obj::__register()
{
	hx::Object *dummy = new FunctionArray_obj;
	FunctionArray_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.util.FunctionArray","\x67","\x3d","\xf5","\x6c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = FunctionArray_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(FunctionArray_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FunctionArray_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FunctionArray_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FunctionArray_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FunctionArray_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace util
