#ifndef LABWORK3_EDGE_H
#define LABWORK3_EDGE_H
#include <iostream>

template<class weight_type, class key_type>
class Edge {
protected:
    std::pair<key_type, key_type> nodes;
    weight_type weight;
public:
    explicit Edge(std::pair<key_type, key_type> pair, weight_type w = weight_type());
    Edge(key_type begin, key_type end, key_type w = key_type());
    std::pair<key_type, key_type> get_nodes() const;
    key_type first() const;
    key_type second() const;
    weight_type get_weight() const;
    bool is_starting_equal(key_type beg) const;
    bool is_ending_equal(key_type end) const;
    void set_value(std::pair<key_type, key_type> pair, weight_type w);
    void set_value(key_type begin, key_type end, weight_type w);
};

template<class weight_type, class key_type>
Edge<weight_type, key_type>::Edge(std::pair<key_type, key_type> pair, weight_type w) {
    nodes = pair;
    weight = w;
}

template<class weight_type, class key_type>
Edge<weight_type, key_type>::Edge(key_type begin, key_type end, key_type w) {
    nodes = std::make_pair(begin, end);
    weight = w;
}

template<class weight_type, class key_type>
std::pair<key_type, key_type> Edge<weight_type, key_type>::get_nodes() const{
    return nodes;
}

template<class weight_type,class key_type>
key_type Edge<weight_type, key_type>::first() const{
    return nodes.first;
}

template<class weight_type, class key_type>
key_type Edge<weight_type, key_type>::second() const {
    return nodes.second;
}

template<class weight_type, class key_type>
weight_type Edge<weight_type, key_type>::get_weight() const {
    return weight;
}

template<class weight_type, class key_type>
bool Edge<weight_type, key_type>::is_starting_equal(key_type beg) const{
    return nodes.first == beg;
}

template<class weight_type, class key_type>
bool Edge<weight_type, key_type>::is_ending_equal(key_type end) const {
    return nodes.second == end;
}

template<class weight_type, class key_type>
void Edge<weight_type, key_type>::set_value(std::pair<key_type, key_type> pair, weight_type w) {
    nodes = pair;
    weight = w;
}

template<class weight_type, class key_type>
void Edge<weight_type, key_type>::set_value(key_type begin, key_type end, weight_type w) {
    nodes = std::make_pair(begin, end);
    weight = w;
}

#endif //LABWORK3_EDGE_H
