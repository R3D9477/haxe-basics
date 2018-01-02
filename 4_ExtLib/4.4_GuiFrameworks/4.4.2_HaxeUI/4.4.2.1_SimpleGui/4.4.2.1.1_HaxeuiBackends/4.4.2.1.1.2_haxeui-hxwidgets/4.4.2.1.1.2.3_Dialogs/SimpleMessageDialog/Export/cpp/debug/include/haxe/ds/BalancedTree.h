// GeneratedByHaxe
#ifndef INCLUDED_haxe_ds_BalancedTree
#define INCLUDED_haxe_ds_BalancedTree

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,ds,BalancedTree)
HX_DECLARE_CLASS2(haxe,ds,TreeNode)

namespace haxe{
namespace ds{


class HXCPP_CLASS_ATTRIBUTES BalancedTree_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef BalancedTree_obj OBJ_;
		BalancedTree_obj();

	public:
		enum { _hx_ClassId = 0x04042deb };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ds.BalancedTree")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxe.ds.BalancedTree"); }
		static hx::ObjectPtr< BalancedTree_obj > __new();
		static hx::ObjectPtr< BalancedTree_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~BalancedTree_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("BalancedTree","\x66","\x71","\xf8","\xaa"); }

		 ::haxe::ds::TreeNode root;
		void set( ::Dynamic key, ::Dynamic value);
		::Dynamic set_dyn();

		 ::Dynamic get( ::Dynamic key);
		::Dynamic get_dyn();

		bool remove( ::Dynamic key);
		::Dynamic remove_dyn();

		bool exists( ::Dynamic key);
		::Dynamic exists_dyn();

		 ::haxe::ds::TreeNode setLoop( ::Dynamic k, ::Dynamic v, ::haxe::ds::TreeNode node);
		::Dynamic setLoop_dyn();

		 ::haxe::ds::TreeNode removeLoop( ::Dynamic k, ::haxe::ds::TreeNode node);
		::Dynamic removeLoop_dyn();

		 ::haxe::ds::TreeNode merge( ::haxe::ds::TreeNode t1, ::haxe::ds::TreeNode t2);
		::Dynamic merge_dyn();

		 ::haxe::ds::TreeNode minBinding( ::haxe::ds::TreeNode t);
		::Dynamic minBinding_dyn();

		 ::haxe::ds::TreeNode removeMinBinding( ::haxe::ds::TreeNode t);
		::Dynamic removeMinBinding_dyn();

		 ::haxe::ds::TreeNode balance( ::haxe::ds::TreeNode l, ::Dynamic k, ::Dynamic v, ::haxe::ds::TreeNode r);
		::Dynamic balance_dyn();

		virtual int compare( ::Dynamic k1, ::Dynamic k2);
		::Dynamic compare_dyn();

};

} // end namespace haxe
} // end namespace ds

#endif /* INCLUDED_haxe_ds_BalancedTree */ 
