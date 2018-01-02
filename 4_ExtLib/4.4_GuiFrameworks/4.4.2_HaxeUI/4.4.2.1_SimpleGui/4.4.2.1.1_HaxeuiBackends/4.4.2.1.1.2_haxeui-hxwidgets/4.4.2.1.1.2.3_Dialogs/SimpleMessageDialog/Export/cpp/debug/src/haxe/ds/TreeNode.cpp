// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ds_TreeNode
#include <haxe/ds/TreeNode.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_3b67413c38760ea6_223_new,"haxe.ds.TreeNode","new",0x88d32f89,"haxe.ds.TreeNode.new","/usr/share/haxe/std/haxe/ds/BalancedTree.hx",223,0x65905886)
namespace haxe{
namespace ds{

void TreeNode_obj::__construct( ::haxe::ds::TreeNode l, ::Dynamic k, ::Dynamic v, ::haxe::ds::TreeNode r,hx::Null< int >  __o_h){
int h = __o_h.Default(-1);
            	HX_STACKFRAME(&_hx_pos_3b67413c38760ea6_223_new)
HXLINE( 224)		this->left = l;
HXLINE( 225)		this->key = k;
HXLINE( 226)		this->value = v;
HXLINE( 227)		this->right = r;
HXLINE( 228)		if ((h == (int)-1)) {
HXLINE( 229)			int _hx_tmp;
HXDLIN( 229)			 ::haxe::ds::TreeNode _this = this->left;
HXDLIN( 229)			int _hx_tmp1;
HXDLIN( 229)			if (hx::IsNull( _this )) {
HXLINE( 229)				_hx_tmp1 = (int)0;
            			}
            			else {
HXLINE( 229)				_hx_tmp1 = _this->_height;
            			}
HXDLIN( 229)			 ::haxe::ds::TreeNode _this1 = this->right;
HXDLIN( 229)			int _hx_tmp2;
HXDLIN( 229)			if (hx::IsNull( _this1 )) {
HXLINE( 229)				_hx_tmp2 = (int)0;
            			}
            			else {
HXLINE( 229)				_hx_tmp2 = _this1->_height;
            			}
HXDLIN( 229)			if ((_hx_tmp1 > _hx_tmp2)) {
HXLINE( 229)				 ::haxe::ds::TreeNode _this2 = this->left;
HXDLIN( 229)				if (hx::IsNull( _this2 )) {
HXLINE( 229)					_hx_tmp = (int)0;
            				}
            				else {
HXLINE( 229)					_hx_tmp = _this2->_height;
            				}
            			}
            			else {
HXLINE( 229)				 ::haxe::ds::TreeNode _this3 = this->right;
HXDLIN( 229)				if (hx::IsNull( _this3 )) {
HXLINE( 229)					_hx_tmp = (int)0;
            				}
            				else {
HXLINE( 229)					_hx_tmp = _this3->_height;
            				}
            			}
HXDLIN( 229)			this->_height = (_hx_tmp + (int)1);
            		}
            		else {
HXLINE( 231)			this->_height = h;
            		}
            	}

Dynamic TreeNode_obj::__CreateEmpty() { return new TreeNode_obj; }

void *TreeNode_obj::_hx_vtable = 0;

Dynamic TreeNode_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< TreeNode_obj > _hx_result = new TreeNode_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _hx_result;
}

bool TreeNode_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1a7bc315;
}


TreeNode_obj::TreeNode_obj()
{
}

void TreeNode_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TreeNode);
	HX_MARK_MEMBER_NAME(left,"left");
	HX_MARK_MEMBER_NAME(right,"right");
	HX_MARK_MEMBER_NAME(key,"key");
	HX_MARK_MEMBER_NAME(value,"value");
	HX_MARK_MEMBER_NAME(_height,"_height");
	HX_MARK_END_CLASS();
}

void TreeNode_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(left,"left");
	HX_VISIT_MEMBER_NAME(right,"right");
	HX_VISIT_MEMBER_NAME(key,"key");
	HX_VISIT_MEMBER_NAME(value,"value");
	HX_VISIT_MEMBER_NAME(_height,"_height");
}

hx::Val TreeNode_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"key") ) { return hx::Val( key ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"left") ) { return hx::Val( left ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"right") ) { return hx::Val( right ); }
		if (HX_FIELD_EQ(inName,"value") ) { return hx::Val( value ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_height") ) { return hx::Val( _height ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val TreeNode_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"key") ) { key=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"left") ) { left=inValue.Cast<  ::haxe::ds::TreeNode >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"right") ) { right=inValue.Cast<  ::haxe::ds::TreeNode >(); return inValue; }
		if (HX_FIELD_EQ(inName,"value") ) { value=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_height") ) { _height=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TreeNode_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("left","\x07","\x08","\xb0","\x47"));
	outFields->push(HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9"));
	outFields->push(HX_HCSTRING("key","\x9f","\x89","\x51","\x00"));
	outFields->push(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"));
	outFields->push(HX_HCSTRING("_height","\x86","\x19","\xc3","\x70"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo TreeNode_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::TreeNode*/ ,(int)offsetof(TreeNode_obj,left),HX_HCSTRING("left","\x07","\x08","\xb0","\x47")},
	{hx::fsObject /*::haxe::ds::TreeNode*/ ,(int)offsetof(TreeNode_obj,right),HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(TreeNode_obj,key),HX_HCSTRING("key","\x9f","\x89","\x51","\x00")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(TreeNode_obj,value),HX_HCSTRING("value","\x71","\x7f","\xb8","\x31")},
	{hx::fsInt,(int)offsetof(TreeNode_obj,_height),HX_HCSTRING("_height","\x86","\x19","\xc3","\x70")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *TreeNode_obj_sStaticStorageInfo = 0;
#endif

static ::String TreeNode_obj_sMemberFields[] = {
	HX_HCSTRING("left","\x07","\x08","\xb0","\x47"),
	HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9"),
	HX_HCSTRING("key","\x9f","\x89","\x51","\x00"),
	HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"),
	HX_HCSTRING("_height","\x86","\x19","\xc3","\x70"),
	::String(null()) };

static void TreeNode_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TreeNode_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void TreeNode_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TreeNode_obj::__mClass,"__mClass");
};

#endif

hx::Class TreeNode_obj::__mClass;

void TreeNode_obj::__register()
{
	hx::Object *dummy = new TreeNode_obj;
	TreeNode_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ds.TreeNode","\x17","\xb7","\xb8","\x9b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = TreeNode_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(TreeNode_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TreeNode_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = TreeNode_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TreeNode_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TreeNode_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ds
