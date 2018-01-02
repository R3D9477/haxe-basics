// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_util_Rectangle
#include <haxe/ui/util/Rectangle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_3e20e808f897463f_9_new,"haxe.ui.util.Rectangle","new",0xbb8dfaa7,"haxe.ui.util.Rectangle.new","haxe/ui/util/Rectangle.hx",9,0x8052298a)
HX_LOCAL_STACK_FRAME(_hx_pos_3e20e808f897463f_18_get_right,"haxe.ui.util.Rectangle","get_right",0x1db701ba,"haxe.ui.util.Rectangle.get_right","haxe/ui/util/Rectangle.hx",18,0x8052298a)
HX_LOCAL_STACK_FRAME(_hx_pos_3e20e808f897463f_20_set_right,"haxe.ui.util.Rectangle","set_right",0x0107edc6,"haxe.ui.util.Rectangle.set_right","haxe/ui/util/Rectangle.hx",20,0x8052298a)
HX_LOCAL_STACK_FRAME(_hx_pos_3e20e808f897463f_27_get_bottom,"haxe.ui.util.Rectangle","get_bottom",0xf9bd134d,"haxe.ui.util.Rectangle.get_bottom","haxe/ui/util/Rectangle.hx",27,0x8052298a)
HX_LOCAL_STACK_FRAME(_hx_pos_3e20e808f897463f_29_set_bottom,"haxe.ui.util.Rectangle","set_bottom",0xfd3ab1c1,"haxe.ui.util.Rectangle.set_bottom","haxe/ui/util/Rectangle.hx",29,0x8052298a)
HX_LOCAL_STACK_FRAME(_hx_pos_3e20e808f897463f_34_inflate,"haxe.ui.util.Rectangle","inflate",0xa225f64e,"haxe.ui.util.Rectangle.inflate","haxe/ui/util/Rectangle.hx",34,0x8052298a)
HX_LOCAL_STACK_FRAME(_hx_pos_3e20e808f897463f_40_toString,"haxe.ui.util.Rectangle","toString",0xeb730505,"haxe.ui.util.Rectangle.toString","haxe/ui/util/Rectangle.hx",40,0x8052298a)
namespace haxe{
namespace ui{
namespace util{

void Rectangle_obj::__construct(hx::Null< Float >  __o_left,hx::Null< Float >  __o_top,hx::Null< Float >  __o_width,hx::Null< Float >  __o_height){
Float left = __o_left.Default(0);
Float top = __o_top.Default(0);
Float width = __o_width.Default(0);
Float height = __o_height.Default(0);
            	HX_STACKFRAME(&_hx_pos_3e20e808f897463f_9_new)
HXLINE(  10)		this->left = left;
HXLINE(  11)		this->top = top;
HXLINE(  12)		this->width = width;
HXLINE(  13)		this->height = height;
            	}

Dynamic Rectangle_obj::__CreateEmpty() { return new Rectangle_obj; }

void *Rectangle_obj::_hx_vtable = 0;

Dynamic Rectangle_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Rectangle_obj > _hx_result = new Rectangle_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool Rectangle_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3745a853;
}

Float Rectangle_obj::get_right(){
            	HX_STACKFRAME(&_hx_pos_3e20e808f897463f_18_get_right)
HXDLIN(  18)		return (this->left + this->width);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Rectangle_obj,get_right,return )

Float Rectangle_obj::set_right(Float value){
            	HX_STACKFRAME(&_hx_pos_3e20e808f897463f_20_set_right)
HXLINE(  21)		this->width = (value - this->left);
HXLINE(  22)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,set_right,return )

Float Rectangle_obj::get_bottom(){
            	HX_STACKFRAME(&_hx_pos_3e20e808f897463f_27_get_bottom)
HXDLIN(  27)		return (this->top + this->height);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Rectangle_obj,get_bottom,return )

Float Rectangle_obj::set_bottom(Float value){
            	HX_STACKFRAME(&_hx_pos_3e20e808f897463f_29_set_bottom)
HXLINE(  30)		this->height = (value - this->top);
HXLINE(  31)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,set_bottom,return )

void Rectangle_obj::inflate(Float dx,Float dy){
            	HX_STACKFRAME(&_hx_pos_3e20e808f897463f_34_inflate)
HXLINE(  35)		 ::haxe::ui::util::Rectangle _hx_tmp = hx::ObjectPtr<OBJ_>(this);
HXDLIN(  35)		_hx_tmp->left = (_hx_tmp->left - dx);
HXDLIN(  35)		 ::haxe::ui::util::Rectangle _hx_tmp1 = hx::ObjectPtr<OBJ_>(this);
HXDLIN(  35)		_hx_tmp1->width = (_hx_tmp1->width + (dx * (int)2));
HXLINE(  36)		 ::haxe::ui::util::Rectangle _hx_tmp2 = hx::ObjectPtr<OBJ_>(this);
HXDLIN(  36)		_hx_tmp2->top = (_hx_tmp2->top - dy);
HXDLIN(  36)		 ::haxe::ui::util::Rectangle _hx_tmp3 = hx::ObjectPtr<OBJ_>(this);
HXDLIN(  36)		_hx_tmp3->height = (_hx_tmp3->height + (dy * (int)2));
            	}


HX_DEFINE_DYNAMIC_FUNC2(Rectangle_obj,inflate,(void))

::String Rectangle_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_3e20e808f897463f_40_toString)
HXDLIN(  40)		::String _hx_tmp = ((((HX_("{left: ",28,99,97,94) + this->left) + HX_(", top: ",87,1d,4b,05)) + this->top) + HX_(", bottom: ",c5,a4,aa,cd));
HXDLIN(  40)		::String _hx_tmp1 = ((_hx_tmp + this->get_bottom()) + HX_(", right: ",8e,3d,30,7b));
HXDLIN(  40)		::String _hx_tmp2 = ((_hx_tmp1 + this->get_right()) + HX_(", width: ",38,46,cd,98));
HXDLIN(  40)		return ((((_hx_tmp2 + this->width) + HX_(", height: ",c1,fc,44,9e)) + this->height) + HX_("}",7d,00,00,00));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Rectangle_obj,toString,return )


Rectangle_obj::Rectangle_obj()
{
}

hx::Val Rectangle_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"top") ) { return hx::Val( top ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"left") ) { return hx::Val( left ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return hx::Val( width ); }
		if (HX_FIELD_EQ(inName,"right") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_right() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return hx::Val( height ); }
		if (HX_FIELD_EQ(inName,"bottom") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_bottom() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"inflate") ) { return hx::Val( inflate_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return hx::Val( toString_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_right") ) { return hx::Val( get_right_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_right") ) { return hx::Val( set_right_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_bottom") ) { return hx::Val( get_bottom_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_bottom") ) { return hx::Val( set_bottom_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Rectangle_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"top") ) { top=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"left") ) { left=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"right") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_right(inValue.Cast< Float >()) ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bottom") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_bottom(inValue.Cast< Float >()) ); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Rectangle_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("left","\x07","\x08","\xb0","\x47"));
	outFields->push(HX_HCSTRING("top","\x95","\x66","\x58","\x00"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9"));
	outFields->push(HX_HCSTRING("bottom","\xeb","\xe6","\x78","\x65"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Rectangle_obj_sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(Rectangle_obj,left),HX_HCSTRING("left","\x07","\x08","\xb0","\x47")},
	{hx::fsFloat,(int)offsetof(Rectangle_obj,top),HX_HCSTRING("top","\x95","\x66","\x58","\x00")},
	{hx::fsFloat,(int)offsetof(Rectangle_obj,width),HX_HCSTRING("width","\x06","\xb6","\x62","\xca")},
	{hx::fsFloat,(int)offsetof(Rectangle_obj,height),HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Rectangle_obj_sStaticStorageInfo = 0;
#endif

static ::String Rectangle_obj_sMemberFields[] = {
	HX_HCSTRING("left","\x07","\x08","\xb0","\x47"),
	HX_HCSTRING("top","\x95","\x66","\x58","\x00"),
	HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("get_right","\x33","\x68","\x0d","\x2d"),
	HX_HCSTRING("set_right","\x3f","\x54","\x5e","\x10"),
	HX_HCSTRING("get_bottom","\xb4","\x56","\x00","\x56"),
	HX_HCSTRING("set_bottom","\x28","\xf5","\x7d","\x59"),
	HX_HCSTRING("inflate","\x87","\x9c","\x1b","\x0c"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void Rectangle_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Rectangle_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Rectangle_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Rectangle_obj::__mClass,"__mClass");
};

#endif

hx::Class Rectangle_obj::__mClass;

void Rectangle_obj::__register()
{
	hx::Object *dummy = new Rectangle_obj;
	Rectangle_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.util.Rectangle","\x35","\x1b","\xec","\x60");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Rectangle_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Rectangle_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Rectangle_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Rectangle_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Rectangle_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Rectangle_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace util
