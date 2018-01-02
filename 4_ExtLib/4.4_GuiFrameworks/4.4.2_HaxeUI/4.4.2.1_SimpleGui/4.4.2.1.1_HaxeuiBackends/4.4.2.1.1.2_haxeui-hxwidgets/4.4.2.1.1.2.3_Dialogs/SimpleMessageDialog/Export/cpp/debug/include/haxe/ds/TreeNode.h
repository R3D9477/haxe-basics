// GeneratedByHaxe
#ifndef INCLUDED_haxe_ds_TreeNode
#define INCLUDED_haxe_ds_TreeNode

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_3b67413c38760ea6_223_new)
HX_DECLARE_CLASS2(haxe,ds,TreeNode)

namespace haxe{
namespace ds{


class HXCPP_CLASS_ATTRIBUTES TreeNode_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef TreeNode_obj OBJ_;
		TreeNode_obj();

	public:
		enum { _hx_ClassId = 0x1a7bc315 };

		void __construct( ::haxe::ds::TreeNode l, ::Dynamic k, ::Dynamic v, ::haxe::ds::TreeNode r,hx::Null< int >  __o_h);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ds.TreeNode")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxe.ds.TreeNode"); }

		hx::ObjectPtr< TreeNode_obj > __new( ::haxe::ds::TreeNode l, ::Dynamic k, ::Dynamic v, ::haxe::ds::TreeNode r,hx::Null< int >  __o_h) {
			hx::ObjectPtr< TreeNode_obj > __this = new TreeNode_obj();
			__this->__construct(l,k,v,r,__o_h);
			return __this;
		}

		static hx::ObjectPtr< TreeNode_obj > __alloc(hx::Ctx *_hx_ctx, ::haxe::ds::TreeNode l, ::Dynamic k, ::Dynamic v, ::haxe::ds::TreeNode r,hx::Null< int >  __o_h) {
			TreeNode_obj *__this = (TreeNode_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(TreeNode_obj), true, "haxe.ds.TreeNode"));
			*(void **)__this = TreeNode_obj::_hx_vtable;
{
int h = __o_h.Default(-1);
            	HX_STACKFRAME(&_hx_pos_3b67413c38760ea6_223_new)
HXLINE( 224)		( ( ::haxe::ds::TreeNode)(__this) )->left = l;
HXLINE( 225)		( ( ::haxe::ds::TreeNode)(__this) )->key = k;
HXLINE( 226)		( ( ::haxe::ds::TreeNode)(__this) )->value = v;
HXLINE( 227)		( ( ::haxe::ds::TreeNode)(__this) )->right = r;
HXLINE( 228)		if ((h == (int)-1)) {
HXLINE( 229)			int _hx_tmp;
HXDLIN( 229)			 ::haxe::ds::TreeNode _this = ( ( ::haxe::ds::TreeNode)(__this) )->left;
HXDLIN( 229)			int _hx_tmp1;
HXDLIN( 229)			if (hx::IsNull( _this )) {
HXLINE( 229)				_hx_tmp1 = (int)0;
            			}
            			else {
HXLINE( 229)				_hx_tmp1 = _this->_height;
            			}
HXDLIN( 229)			 ::haxe::ds::TreeNode _this1 = ( ( ::haxe::ds::TreeNode)(__this) )->right;
HXDLIN( 229)			int _hx_tmp2;
HXDLIN( 229)			if (hx::IsNull( _this1 )) {
HXLINE( 229)				_hx_tmp2 = (int)0;
            			}
            			else {
HXLINE( 229)				_hx_tmp2 = _this1->_height;
            			}
HXDLIN( 229)			if ((_hx_tmp1 > _hx_tmp2)) {
HXLINE( 229)				 ::haxe::ds::TreeNode _this2 = ( ( ::haxe::ds::TreeNode)(__this) )->left;
HXDLIN( 229)				if (hx::IsNull( _this2 )) {
HXLINE( 229)					_hx_tmp = (int)0;
            				}
            				else {
HXLINE( 229)					_hx_tmp = _this2->_height;
            				}
            			}
            			else {
HXLINE( 229)				 ::haxe::ds::TreeNode _this3 = ( ( ::haxe::ds::TreeNode)(__this) )->right;
HXDLIN( 229)				if (hx::IsNull( _this3 )) {
HXLINE( 229)					_hx_tmp = (int)0;
            				}
            				else {
HXLINE( 229)					_hx_tmp = _this3->_height;
            				}
            			}
HXDLIN( 229)			( ( ::haxe::ds::TreeNode)(__this) )->_height = (_hx_tmp + (int)1);
            		}
            		else {
HXLINE( 231)			( ( ::haxe::ds::TreeNode)(__this) )->_height = h;
            		}
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TreeNode_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("TreeNode","\xa0","\x92","\x83","\x06"); }

		 ::haxe::ds::TreeNode left;
		 ::haxe::ds::TreeNode right;
		 ::Dynamic key;
		 ::Dynamic value;
		int _height;
};

} // end namespace haxe
} // end namespace ds

#endif /* INCLUDED_haxe_ds_TreeNode */ 
