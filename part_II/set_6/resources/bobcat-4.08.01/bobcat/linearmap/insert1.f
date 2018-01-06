//     pair<iterator, bool> insert(value_type const keyvalue);

template <typename Key, typename Value, typename Alloc>
std::pair<typename LinearMap<Key, Value, Alloc>::iterator, bool> 
    LinearMap<Key, Value, Alloc>::insert(value_type const &keyValue)
{
    bool inserted;

    auto iter = find(keyValue.first);
    if (iter != end())
        inserted = false;
    else
    {
        Base::push_back(keyValue);
        iter = iterator(&Base::back());
        inserted = true;
    }
    
    return std::pair<iterator, bool>(iter, inserted);
}
