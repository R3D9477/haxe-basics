// GeneratedByHaxe
#ifndef INCLUDED_haxe_ds_IntMap
#define INCLUDED_haxe_ds_IntMap

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,IntMap)

namespace haxe{
namespace ds{


class HXCPP_CLASS_ATTRIBUTES IntMap_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef IntMap_obj OBJ_;
		IntMap_obj();

	public:
		enum { _hx_ClassId = 0x50b86242 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ds.IntMap")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxe.ds.IntMap"); }
		static hx::ObjectPtr< IntMap_obj > __new();
		static hx::ObjectPtr< IntMap_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~IntMap_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		bool remove_5889326f( ::Dynamic k);

		bool exists_5889326f( ::Dynamic k);

		void set_41d0cb46( ::Dynamic k, ::Dynamic v);

		 ::Dynamic get_dc94b8fa( ::Dynamic k);
		::String __ToString() const { return HX_HCSTRING("IntMap","\x0d","\xa9","\x08","\xd3"); }

		 ::Dynamic h;
		void set(int key, ::Dynamic value);
		::Dynamic set_dyn();

		 ::Dynamic get(int key);
		::Dynamic get_dyn();

		bool exists(int key);
		::Dynamic exists_dyn();

		bool remove(int key);
		::Dynamic remove_dyn();


  inline void set(int key, ::null value) { __int_hash_set(h,key,value); }
  inline void set(int key, bool value) { __int_hash_set(h,key,value); }
  inline void set(int key, char value) { __int_hash_set_int(h,key,value); }
  inline void set(int key, unsigned char value) { __int_hash_set_int(h,key,value); }
  inline void set(int key, signed char value) { __int_hash_set_int(h,key,value); }
  inline void set(int key, short value) { __int_hash_set_int(h,key,value); }
  inline void set(int key, unsigned short value) { __int_hash_set_int(h,key,value); }
  inline void set(int key, int value) { __int_hash_set_int(h,key,value); }
  inline void set(int key, unsigned int value) { __int_hash_set_int(h,key,value); }
  inline void set(int key, float value) { __int_hash_set_float(h,key,value); }
  inline void set(int key, double value) { __int_hash_set_float(h,key,value); }
  inline void set(int key, ::String value) { __int_hash_set_string(h,key,value); }

  template<typename V, typename H>
  inline void set(int key, const ::cpp::Struct<V,H> &value) {__int_hash_set(h,key,value); }
  template<typename F>
  inline void set(int key, const ::cpp::Function<F> &value) {__int_hash_set(h,key,value); }
  template<typename V>
  inline void set(int key, const ::cpp::Pointer<V> &value) {__int_hash_set(h,key,(Dynamic)value ); }

  template<typename VALUE>
  inline void set(Dynamic &key, const VALUE &value) { set( (int)key, value ); }

};

} // end namespace haxe
} // end namespace ds

#endif /* INCLUDED_haxe_ds_IntMap */ 
