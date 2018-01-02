// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_haxe_ds_BalancedTree
#include <haxe/ds/BalancedTree.h>
#endif
#ifndef INCLUDED_haxe_ds_TreeNode
#include <haxe/ds/TreeNode.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_4f13c97c1ff92405_41_new,"haxe.ds.BalancedTree","new",0xfb50b0cf,"haxe.ds.BalancedTree.new","/usr/share/haxe/std/haxe/ds/BalancedTree.hx",41,0x65905886)
HX_LOCAL_STACK_FRAME(_hx_pos_4f13c97c1ff92405_51_set,"haxe.ds.BalancedTree","set",0xfb547c11,"haxe.ds.BalancedTree.set","/usr/share/haxe/std/haxe/ds/BalancedTree.hx",51,0x65905886)
HX_LOCAL_STACK_FRAME(_hx_pos_4f13c97c1ff92405_61_get,"haxe.ds.BalancedTree","get",0xfb4b6105,"haxe.ds.BalancedTree.get","/usr/share/haxe/std/haxe/ds/BalancedTree.hx",61,0x65905886)
HX_LOCAL_STACK_FRAME(_hx_pos_4f13c97c1ff92405_83_remove,"haxe.ds.BalancedTree","remove",0x68366b35,"haxe.ds.BalancedTree.remove","/usr/share/haxe/std/haxe/ds/BalancedTree.hx",83,0x65905886)
HX_LOCAL_STACK_FRAME(_hx_pos_4f13c97c1ff92405_99_exists,"haxe.ds.BalancedTree","exists",0x238deccd,"haxe.ds.BalancedTree.exists","/usr/share/haxe/std/haxe/ds/BalancedTree.hx",99,0x65905886)
HX_LOCAL_STACK_FRAME(_hx_pos_4f13c97c1ff92405_132_setLoop,"haxe.ds.BalancedTree","setLoop",0xe1a32b15,"haxe.ds.BalancedTree.setLoop","/usr/share/haxe/std/haxe/ds/BalancedTree.hx",132,0x65905886)
HX_LOCAL_STACK_FRAME(_hx_pos_4f13c97c1ff92405_145_removeLoop,"haxe.ds.BalancedTree","removeLoop",0x52157c39,"haxe.ds.BalancedTree.removeLoop","/usr/share/haxe/std/haxe/ds/BalancedTree.hx",145,0x65905886)
HX_LOCAL_STACK_FRAME(_hx_pos_4f13c97c1ff92405_169_merge,"haxe.ds.BalancedTree","merge",0x620fbce7,"haxe.ds.BalancedTree.merge","/usr/share/haxe/std/haxe/ds/BalancedTree.hx",169,0x65905886)
HX_LOCAL_STACK_FRAME(_hx_pos_4f13c97c1ff92405_177_minBinding,"haxe.ds.BalancedTree","minBinding",0xd2237344,"haxe.ds.BalancedTree.minBinding","/usr/share/haxe/std/haxe/ds/BalancedTree.hx",177,0x65905886)
HX_LOCAL_STACK_FRAME(_hx_pos_4f13c97c1ff92405_183_removeMinBinding,"haxe.ds.BalancedTree","removeMinBinding",0xe82c3b68,"haxe.ds.BalancedTree.removeMinBinding","/usr/share/haxe/std/haxe/ds/BalancedTree.hx",183,0x65905886)
HX_LOCAL_STACK_FRAME(_hx_pos_4f13c97c1ff92405_187_balance,"haxe.ds.BalancedTree","balance",0xf7f4e10b,"haxe.ds.BalancedTree.balance","/usr/share/haxe/std/haxe/ds/BalancedTree.hx",187,0x65905886)
HX_LOCAL_STACK_FRAME(_hx_pos_4f13c97c1ff92405_202_compare,"haxe.ds.BalancedTree","compare",0x57d05c94,"haxe.ds.BalancedTree.compare","/usr/share/haxe/std/haxe/ds/BalancedTree.hx",202,0x65905886)
namespace haxe{
namespace ds{

void BalancedTree_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_4f13c97c1ff92405_41_new)
            	}

Dynamic BalancedTree_obj::__CreateEmpty() { return new BalancedTree_obj; }

void *BalancedTree_obj::_hx_vtable = 0;

Dynamic BalancedTree_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< BalancedTree_obj > _hx_result = new BalancedTree_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool BalancedTree_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x04042deb;
}

void BalancedTree_obj::set( ::Dynamic key, ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_4f13c97c1ff92405_51_set)
HXDLIN(  51)		this->root = this->setLoop(key,value,this->root);
            	}


HX_DEFINE_DYNAMIC_FUNC2(BalancedTree_obj,set,(void))

 ::Dynamic BalancedTree_obj::get( ::Dynamic key){
            	HX_STACKFRAME(&_hx_pos_4f13c97c1ff92405_61_get)
HXLINE(  62)		 ::haxe::ds::TreeNode node = this->root;
HXLINE(  63)		while(hx::IsNotNull( node )){
HXLINE(  64)			int c = this->compare(key,node->key);
HXLINE(  65)			if ((c == (int)0)) {
HXLINE(  65)				return node->value;
            			}
HXLINE(  66)			if ((c < (int)0)) {
HXLINE(  66)				node = node->left;
            			}
            			else {
HXLINE(  67)				node = node->right;
            			}
            		}
HXLINE(  69)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(BalancedTree_obj,get,return )

bool BalancedTree_obj::remove( ::Dynamic key){
            	HX_STACKFRAME(&_hx_pos_4f13c97c1ff92405_83_remove)
HXDLIN(  83)		try {
            			HX_STACK_CATCHABLE(::String, 0);
HXLINE(  84)			this->root = this->removeLoop(key,this->root);
HXLINE(  85)			return true;
            		}
            		catch( ::Dynamic _hx_e){
            			if (_hx_e.IsClass< ::String >() ){
            				HX_STACK_BEGIN_CATCH
            				::String e = _hx_e;
HXLINE(  88)				return false;
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXLINE(  83)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(BalancedTree_obj,remove,return )

bool BalancedTree_obj::exists( ::Dynamic key){
            	HX_STACKFRAME(&_hx_pos_4f13c97c1ff92405_99_exists)
HXLINE( 100)		 ::haxe::ds::TreeNode node = this->root;
HXLINE( 101)		while(hx::IsNotNull( node )){
HXLINE( 102)			int c = this->compare(key,node->key);
HXLINE( 103)			if ((c == (int)0)) {
HXLINE( 103)				return true;
            			}
            			else {
HXLINE( 104)				if ((c < (int)0)) {
HXLINE( 104)					node = node->left;
            				}
            				else {
HXLINE( 105)					node = node->right;
            				}
            			}
            		}
HXLINE( 107)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(BalancedTree_obj,exists,return )

 ::haxe::ds::TreeNode BalancedTree_obj::setLoop( ::Dynamic k, ::Dynamic v, ::haxe::ds::TreeNode node){
            	HX_GC_STACKFRAME(&_hx_pos_4f13c97c1ff92405_132_setLoop)
HXLINE( 133)		if (hx::IsNull( node )) {
HXLINE( 133)			return  ::haxe::ds::TreeNode_obj::__alloc( HX_CTX ,null(),k,v,null(),null());
            		}
HXLINE( 134)		int c = this->compare(k,node->key);
HXLINE( 135)		if ((c == (int)0)) {
HXLINE( 135)			int _hx_tmp;
HXDLIN( 135)			if (hx::IsNull( node )) {
HXLINE( 135)				_hx_tmp = (int)0;
            			}
            			else {
HXLINE( 135)				_hx_tmp = node->_height;
            			}
HXDLIN( 135)			return  ::haxe::ds::TreeNode_obj::__alloc( HX_CTX ,node->left,k,v,node->right,_hx_tmp);
            		}
            		else {
HXLINE( 136)			if ((c < (int)0)) {
HXLINE( 137)				 ::haxe::ds::TreeNode nl = this->setLoop(k,v,node->left);
HXLINE( 138)				return this->balance(nl,node->key,node->value,node->right);
            			}
            			else {
HXLINE( 140)				 ::haxe::ds::TreeNode nr = this->setLoop(k,v,node->right);
HXLINE( 141)				return this->balance(node->left,node->key,node->value,nr);
            			}
            		}
HXLINE( 135)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC3(BalancedTree_obj,setLoop,return )

 ::haxe::ds::TreeNode BalancedTree_obj::removeLoop( ::Dynamic k, ::haxe::ds::TreeNode node){
            	HX_STACKFRAME(&_hx_pos_4f13c97c1ff92405_145_removeLoop)
HXLINE( 146)		if (hx::IsNull( node )) {
HXLINE( 146)			HX_STACK_DO_THROW(HX_("Not_found",b6,92,a5,ea));
            		}
HXLINE( 147)		int c = this->compare(k,node->key);
HXLINE( 148)		if ((c == (int)0)) {
HXLINE( 148)			return this->merge(node->left,node->right);
            		}
            		else {
HXLINE( 149)			if ((c < (int)0)) {
HXLINE( 149)				 ::haxe::ds::TreeNode _hx_tmp = this->removeLoop(k,node->left);
HXDLIN( 149)				return this->balance(_hx_tmp,node->key,node->value,node->right);
            			}
            			else {
HXLINE( 150)				 ::haxe::ds::TreeNode node1 = node->left;
HXDLIN( 150)				 ::Dynamic node2 = node->key;
HXDLIN( 150)				 ::Dynamic node3 = node->value;
HXDLIN( 150)				return this->balance(node1,node2,node3,this->removeLoop(k,node->right));
            			}
            		}
HXLINE( 148)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC2(BalancedTree_obj,removeLoop,return )

 ::haxe::ds::TreeNode BalancedTree_obj::merge( ::haxe::ds::TreeNode t1, ::haxe::ds::TreeNode t2){
            	HX_STACKFRAME(&_hx_pos_4f13c97c1ff92405_169_merge)
HXLINE( 170)		if (hx::IsNull( t1 )) {
HXLINE( 170)			return t2;
            		}
HXLINE( 171)		if (hx::IsNull( t2 )) {
HXLINE( 171)			return t1;
            		}
HXLINE( 172)		 ::haxe::ds::TreeNode t = this->minBinding(t2);
HXLINE( 173)		 ::Dynamic t3 = t->key;
HXDLIN( 173)		 ::Dynamic t4 = t->value;
HXDLIN( 173)		return this->balance(t1,t3,t4,this->removeMinBinding(t2));
            	}


HX_DEFINE_DYNAMIC_FUNC2(BalancedTree_obj,merge,return )

 ::haxe::ds::TreeNode BalancedTree_obj::minBinding( ::haxe::ds::TreeNode t){
            	HX_STACKFRAME(&_hx_pos_4f13c97c1ff92405_177_minBinding)
HXDLIN( 177)		if (hx::IsNull( t )) {
HXDLIN( 177)			HX_STACK_DO_THROW(HX_("Not_found",b6,92,a5,ea));
            		}
            		else {
HXLINE( 178)			if (hx::IsNull( t->left )) {
HXLINE( 178)				return t;
            			}
            			else {
HXLINE( 179)				return this->minBinding(t->left);
            			}
            		}
HXLINE( 177)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(BalancedTree_obj,minBinding,return )

 ::haxe::ds::TreeNode BalancedTree_obj::removeMinBinding( ::haxe::ds::TreeNode t){
            	HX_STACKFRAME(&_hx_pos_4f13c97c1ff92405_183_removeMinBinding)
HXDLIN( 183)		if (hx::IsNull( t->left )) {
HXDLIN( 183)			return t->right;
            		}
            		else {
HXLINE( 184)			 ::haxe::ds::TreeNode _hx_tmp = this->removeMinBinding(t->left);
HXDLIN( 184)			return this->balance(_hx_tmp,t->key,t->value,t->right);
            		}
HXLINE( 183)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(BalancedTree_obj,removeMinBinding,return )

 ::haxe::ds::TreeNode BalancedTree_obj::balance( ::haxe::ds::TreeNode l, ::Dynamic k, ::Dynamic v, ::haxe::ds::TreeNode r){
            	HX_GC_STACKFRAME(&_hx_pos_4f13c97c1ff92405_187_balance)
HXLINE( 188)		int hl;
HXDLIN( 188)		if (hx::IsNull( l )) {
HXLINE( 188)			hl = (int)0;
            		}
            		else {
HXLINE( 188)			hl = l->_height;
            		}
HXLINE( 189)		int hr;
HXDLIN( 189)		if (hx::IsNull( r )) {
HXLINE( 189)			hr = (int)0;
            		}
            		else {
HXLINE( 189)			hr = r->_height;
            		}
HXLINE( 190)		if ((hl > (hr + (int)2))) {
HXLINE( 191)			 ::haxe::ds::TreeNode _this = l->left;
HXDLIN( 191)			int _hx_tmp;
HXDLIN( 191)			if (hx::IsNull( _this )) {
HXLINE( 191)				_hx_tmp = (int)0;
            			}
            			else {
HXLINE( 191)				_hx_tmp = _this->_height;
            			}
HXDLIN( 191)			 ::haxe::ds::TreeNode _this1 = l->right;
HXDLIN( 191)			int _hx_tmp1;
HXDLIN( 191)			if (hx::IsNull( _this1 )) {
HXLINE( 191)				_hx_tmp1 = (int)0;
            			}
            			else {
HXLINE( 191)				_hx_tmp1 = _this1->_height;
            			}
HXDLIN( 191)			if ((_hx_tmp >= _hx_tmp1)) {
HXLINE( 191)				 ::haxe::ds::TreeNode l1 = l->left;
HXDLIN( 191)				 ::Dynamic l2 = l->key;
HXDLIN( 191)				 ::Dynamic l3 = l->value;
HXDLIN( 191)				return  ::haxe::ds::TreeNode_obj::__alloc( HX_CTX ,l1,l2,l3, ::haxe::ds::TreeNode_obj::__alloc( HX_CTX ,l->right,k,v,r,null()),null());
            			}
            			else {
HXLINE( 192)				 ::haxe::ds::TreeNode _hx_tmp2 =  ::haxe::ds::TreeNode_obj::__alloc( HX_CTX ,l->left,l->key,l->value,l->right->left,null());
HXDLIN( 192)				 ::Dynamic l4 = l->right->key;
HXDLIN( 192)				 ::Dynamic l5 = l->right->value;
HXDLIN( 192)				return  ::haxe::ds::TreeNode_obj::__alloc( HX_CTX ,_hx_tmp2,l4,l5, ::haxe::ds::TreeNode_obj::__alloc( HX_CTX ,l->right->right,k,v,r,null()),null());
            			}
            		}
            		else {
HXLINE( 193)			if ((hr > (hl + (int)2))) {
HXLINE( 194)				 ::haxe::ds::TreeNode _this2 = r->right;
HXDLIN( 194)				int _hx_tmp3;
HXDLIN( 194)				if (hx::IsNull( _this2 )) {
HXLINE( 194)					_hx_tmp3 = (int)0;
            				}
            				else {
HXLINE( 194)					_hx_tmp3 = _this2->_height;
            				}
HXDLIN( 194)				 ::haxe::ds::TreeNode _this3 = r->left;
HXDLIN( 194)				int _hx_tmp4;
HXDLIN( 194)				if (hx::IsNull( _this3 )) {
HXLINE( 194)					_hx_tmp4 = (int)0;
            				}
            				else {
HXLINE( 194)					_hx_tmp4 = _this3->_height;
            				}
HXDLIN( 194)				if ((_hx_tmp3 > _hx_tmp4)) {
HXLINE( 194)					return  ::haxe::ds::TreeNode_obj::__alloc( HX_CTX , ::haxe::ds::TreeNode_obj::__alloc( HX_CTX ,l,k,v,r->left,null()),r->key,r->value,r->right,null());
            				}
            				else {
HXLINE( 195)					 ::haxe::ds::TreeNode _hx_tmp5 =  ::haxe::ds::TreeNode_obj::__alloc( HX_CTX ,l,k,v,r->left->left,null());
HXDLIN( 195)					 ::Dynamic r1 = r->left->key;
HXDLIN( 195)					 ::Dynamic r2 = r->left->value;
HXDLIN( 195)					return  ::haxe::ds::TreeNode_obj::__alloc( HX_CTX ,_hx_tmp5,r1,r2, ::haxe::ds::TreeNode_obj::__alloc( HX_CTX ,r->left->right,r->key,r->value,r->right,null()),null());
            				}
            			}
            			else {
HXLINE( 197)				int _hx_tmp6;
HXDLIN( 197)				if ((hl > hr)) {
HXLINE( 197)					_hx_tmp6 = hl;
            				}
            				else {
HXLINE( 197)					_hx_tmp6 = hr;
            				}
HXDLIN( 197)				return  ::haxe::ds::TreeNode_obj::__alloc( HX_CTX ,l,k,v,r,(_hx_tmp6 + (int)1));
            			}
            		}
HXLINE( 190)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC4(BalancedTree_obj,balance,return )

int BalancedTree_obj::compare( ::Dynamic k1, ::Dynamic k2){
            	HX_STACKFRAME(&_hx_pos_4f13c97c1ff92405_202_compare)
HXDLIN( 202)		return ::Reflect_obj::compare(k1,k2);
            	}


HX_DEFINE_DYNAMIC_FUNC2(BalancedTree_obj,compare,return )


hx::ObjectPtr< BalancedTree_obj > BalancedTree_obj::__new() {
	hx::ObjectPtr< BalancedTree_obj > __this = new BalancedTree_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< BalancedTree_obj > BalancedTree_obj::__alloc(hx::Ctx *_hx_ctx) {
	BalancedTree_obj *__this = (BalancedTree_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(BalancedTree_obj), true, "haxe.ds.BalancedTree"));
	*(void **)__this = BalancedTree_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

BalancedTree_obj::BalancedTree_obj()
{
}

void BalancedTree_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BalancedTree);
	HX_MARK_MEMBER_NAME(root,"root");
	HX_MARK_END_CLASS();
}

void BalancedTree_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(root,"root");
}

hx::Val BalancedTree_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return hx::Val( set_dyn() ); }
		if (HX_FIELD_EQ(inName,"get") ) { return hx::Val( get_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"root") ) { return hx::Val( root ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"merge") ) { return hx::Val( merge_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"remove") ) { return hx::Val( remove_dyn() ); }
		if (HX_FIELD_EQ(inName,"exists") ) { return hx::Val( exists_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"setLoop") ) { return hx::Val( setLoop_dyn() ); }
		if (HX_FIELD_EQ(inName,"balance") ) { return hx::Val( balance_dyn() ); }
		if (HX_FIELD_EQ(inName,"compare") ) { return hx::Val( compare_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"removeLoop") ) { return hx::Val( removeLoop_dyn() ); }
		if (HX_FIELD_EQ(inName,"minBinding") ) { return hx::Val( minBinding_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"removeMinBinding") ) { return hx::Val( removeMinBinding_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val BalancedTree_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"root") ) { root=inValue.Cast<  ::haxe::ds::TreeNode >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BalancedTree_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("root","\x22","\xee","\xae","\x4b"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo BalancedTree_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::TreeNode*/ ,(int)offsetof(BalancedTree_obj,root),HX_HCSTRING("root","\x22","\xee","\xae","\x4b")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *BalancedTree_obj_sStaticStorageInfo = 0;
#endif

static ::String BalancedTree_obj_sMemberFields[] = {
	HX_HCSTRING("root","\x22","\xee","\xae","\x4b"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"),
	HX_HCSTRING("exists","\xdc","\x1d","\xe0","\xbf"),
	HX_HCSTRING("setLoop","\x26","\xe7","\x3b","\x0d"),
	HX_HCSTRING("removeLoop","\xc8","\xe0","\xd6","\xc4"),
	HX_HCSTRING("merge","\xb8","\xa2","\xc6","\x05"),
	HX_HCSTRING("minBinding","\xd3","\xd7","\xe4","\x44"),
	HX_HCSTRING("removeMinBinding","\x37","\xf5","\x8d","\xfe"),
	HX_HCSTRING("balance","\x1c","\x9d","\x8d","\x23"),
	HX_HCSTRING("compare","\xa5","\x18","\x69","\x83"),
	::String(null()) };

static void BalancedTree_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BalancedTree_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void BalancedTree_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BalancedTree_obj::__mClass,"__mClass");
};

#endif

hx::Class BalancedTree_obj::__mClass;

void BalancedTree_obj::__register()
{
	hx::Object *dummy = new BalancedTree_obj;
	BalancedTree_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ds.BalancedTree","\x5d","\x9d","\x3e","\x70");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = BalancedTree_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(BalancedTree_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< BalancedTree_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = BalancedTree_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BalancedTree_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BalancedTree_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ds
