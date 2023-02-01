#include "ThSafeData.h"

#include <iostream>

template <typename ValueType>
void ThSafeValue<ValueType>::set(const ValueType& val)
{
    std::unique_lock lock(mutex_);
    //value = std::move(val);
    value = val;
}

template <typename ValueType>
ValueType ThSafeValue<ValueType>::get() const
{
    std::shared_lock lock(mutex_);
    return value;
}

template class ThSafeValue<int>;
template class ThSafeValue<float>;